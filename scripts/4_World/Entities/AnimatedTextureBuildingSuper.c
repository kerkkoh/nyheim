/**
 * Title: Hiddenselection Animated Texture and Material 1.0.0
 * Author: Kerkkoh
 *
 * Brief: Animates singular hiddenSelection's texture and material based
 *        on a constant interval and pre-defined animation phases. Performance
 *        impact is dependent on m_interval and m_render_distance. Configurable
 *        within the cfgVehicles class of your object with a single line script
 *        required.
 *
 * Example configuration:
 *  class CfgVehicles
 *  {
 *      class HouseNoDestruct;
 *      class Land_YourAnimatedObject: HouseNoDestruct
 *      {
 *          scope = 2;
 *          displayName = "Land_YourAnimatedObject";
 *          model = "yourobjects\youranimatedobject.p3d";
 *          hiddenSelections[] = {"animatedSection"};
 *          hiddenSelectionsTextures[] = {"yourobjects\data\defaultStage.paa"};
 *          hiddenSelectionsMaterials[] = {"yourobjects\data\defaultStage.rvmat"};
 *          class AnimatedTexture {
 *              enabled = 1;
 *              loop = 1;
 *              increment = 1;
 *              interval = 100;
 *              intervalRandomness = 0;
 *              renderDistance = 10.0;
 *              distanceResetsToDefault = 1;
 *              selectionToAnimate = "animatedSection";
 *              // Use empty strings if you want no changes for that stage in texture or material
 *              hiddenSelectionsTexturePhases[] = {"yourobjects\data\stage0.paa", "yourobjects\data\stage1.paa"};
 *              hiddenSelectionsMaterialPhases[] = {"yourobjects\data\stage0.rvmat", "yourobjects\data\stage1.rvmat"};
 *          };
 *      };
 *  };
 *
 * You must add
 *  class Land_YourAnimatedObject : AnimatedTextureBuildingSuper {}
 * within a script file so that the animations work properly.
 *
 */

// Change BuildingSuper to something different if your class inherits something
// different by default. Apparently multiple inheritance is not supported, so you'll
// just have to duplicate this class for each type.
class AnimatedTextureBuildingSuper : BuildingSuper
{
    // -- Configure these in the inheriting class constructor or in cfgVehicles > yourclass > AnimatedTexture --
    // Determines whether the animation is playing or not
    protected bool m_enabled = true;
    // Whether to loop after reaching the last animation step or not
    protected bool m_loop = true;
    // Increment (or negative for decrement) on each animation step
    protected int m_increment = 1;
    // Animation interval in ms, values of <=20 are possible but not advisable
    protected int m_interval = 500;
    // Animation (additive one-time) randomness in ms
    protected int m_interval_randomness = 0;
    // Animation is only played if the camera (player) is closer than this value
    protected float m_render_distance = 20.0;
    // If camera is further than render distance, reset texture/material back to default
    // from hiddenSelectionsTextures/Materials
    protected bool m_distance_resets_to_default = true;
    // Which hiddenSelection should be animated
    protected string m_selection_to_animate = "animated";
    // -- -------------------------------------------------- --

    // If you want to manually control the animation phases (think displays that react
    // to user actions etc.) use SetAnimationPhase (first param is index within the texture
    // & material array) and set m_enabled to false

    // ***If you want a phase to only change the texture
    // and not the material, use an empty string in that phase***
    private string m_cfg_texture_array = "hiddenSelectionsTexturePhases";
    private string m_cfg_material_array = "hiddenSelectionsMaterialPhases";

    private int m_selection_index = -1;
    private autoptr array<string> m_textures = new array<string>;
    private autoptr array<string> m_materials = new array<string>;
    private autoptr array<string> m_hidden_selections_textures = new array<string>;
    private autoptr array<string> m_hidden_selections_materials = new array<string>;
    private int m_phases_count = -1;
    protected int m_animation_phase = 0;

    private string m_anim_config_path = "CfgVehicles " + GetType() + " AnimatedTexture ";

    bool ConfigEntryExists(string entry)
    {
        return GetGame().ConfigIsExisting(m_anim_config_path + entry);
    }

    void AnimatedTextureBuildingSuper()
    {
        if (GetGame().IsServer()) return;

        // You can override these in inheriting class' constructor or within
        // the AnimatedTexture class inside of your item's class
        if (ConfigIsExisting("AnimatedTexture"))
        {
            if (ConfigEntryExists("enabled"))
                m_enabled = GetGame().ConfigGetInt(m_anim_config_path + "enabled") == 1;
            if (ConfigEntryExists("loop"))
                m_loop = GetGame().ConfigGetInt(m_anim_config_path + "loop") == 1;
            if (ConfigEntryExists("increment"))
                m_increment = GetGame().ConfigGetInt(m_anim_config_path + "increment");
            if (ConfigEntryExists("interval"))
                m_interval = GetGame().ConfigGetInt(m_anim_config_path + "interval");
            if (ConfigEntryExists("intervalRandomness"))
                m_interval_randomness = GetGame().ConfigGetInt(m_anim_config_path + "intervalRandomness");
            if (ConfigEntryExists("renderDistance"))
                m_render_distance = GetGame().ConfigGetFloat(m_anim_config_path + "renderDistance");
            if (ConfigEntryExists("distanceResetsToDefault"))
                m_distance_resets_to_default = GetGame().ConfigGetInt(m_anim_config_path + "distanceResetsToDefault") == 1;
            if (ConfigEntryExists("selectionToAnimate"))
                m_selection_to_animate = GetGame().ConfigGetTextOut(m_anim_config_path + "selectionToAnimate");
        }

        // Inheriting class should have some time to set its values
        GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(this.Init, 20);
    }

    void Init()
    {
        m_selection_index = GetHiddenSelectionIndex(m_selection_to_animate);

        string config_class_path = "CfgVehicles " + GetType();
        string config_array_path;

        config_array_path = config_class_path + " AnimatedTexture " + m_cfg_texture_array;
        GetGame().ConfigGetTextArray(config_array_path, m_textures);
        config_array_path = config_class_path + " AnimatedTexture " + m_cfg_material_array;
        GetGame().ConfigGetTextArray(config_array_path, m_materials);
        config_array_path = config_class_path + " hiddenSelectionsTextures";
        GetGame().ConfigGetTextArray(config_array_path, m_hidden_selections_textures);
        config_array_path = config_class_path + " hiddenSelectionsMaterials";
        GetGame().ConfigGetTextArray(config_array_path, m_hidden_selections_materials);

        m_phases_count = m_textures.Count();
        if (ValidValues())
        {
            GetGame().GetCallQueue(CALL_CATEGORY_GAMEPLAY).CallLater(this.AnimationTick, m_interval + Math.RandomInt(0, m_interval_randomness), true);
        }
        else
        {
            string error = "AnimatedTextureBase :: You have an error in the configuration:\n";
            if (m_textures.Count() != m_materials.Count())
                error += string.Format("-> The amount of textures and materials don't match up in %1 (%2) and %3 (%4).\n", m_cfg_texture_array, m_textures.Count(), m_cfg_material_array, m_materials.Count());
            if (m_phases_count == 0)
                error += string.Format("-> Either textures and materials arrays aren't called %1 and %2 or they are empty.\n", m_cfg_texture_array, m_cfg_material_array);
            else if (m_increment >= m_phases_count)
                error += string.Format("-> The increment of animation phases (%1) must be smaller than the amount of animation phases (%2).\n", m_increment, m_phases_count);
            if (m_selection_index == -1)
                error += string.Format("-> Couldn't find the hiddenselection (%1) within the object.\n", m_selection_to_animate);
            Error(error);
        }
    }

    bool ValidValues()
    {
        return m_textures.Count() == m_materials.Count() && m_phases_count > 0 && m_increment < m_phases_count && m_selection_index != -1;
    }

    bool ShouldRender()
    {
        return m_enabled && vector.Distance(GetPosition(), GetGame().GetCurrentCameraPosition()) <= m_render_distance;
    }

    void UpdateVisuals()
    {
        string texture_phase = m_textures.Get(m_animation_phase);
        string material_phase = m_materials.Get(m_animation_phase);

        if (texture_phase != "")
        {
            SetObjectTexture(m_selection_index, texture_phase);
        }
        if (material_phase != "")
        {
            SetObjectMaterial(m_selection_index, material_phase);
        }
    }

    void ResetVisuals()
    {
        m_animation_phase = 0;
        SetObjectTexture(m_selection_index, m_hidden_selections_textures.Get(m_selection_index));
        SetObjectMaterial(m_selection_index, m_hidden_selections_materials.Get(m_selection_index));
    }

    void SetAnimationPhase(int phase, bool update_visuals = true, bool force = false)
    {
        m_animation_phase = phase;

        if (!force && m_loop)
        {
            if (m_animation_phase == m_phases_count)
            {
                m_animation_phase = 0;
            }
            else if (m_animation_phase == 0)
            {
                m_animation_phase = m_phases_count;
            }
        }

        if (update_visuals) UpdateVisuals();
    }

    void AnimationTick()
    {
        if (ShouldRender())
        {
            SetAnimationPhase(m_animation_phase + m_increment);
        } else if (m_distance_resets_to_default) {
            ResetVisuals();
        }
    }
}
