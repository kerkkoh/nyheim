/**
* Editor fixes and stuff, only enabled when DayZ Editor mod is loaded
*/

modded class EditorTerrainBuilderFile : EditorFileType
{
    /*
        vector GetTerrainBuilderAngles(vector dir, vector up)
        {
            vector aside = dir * up;
            EditorLog.Debug("aside %1", aside.ToString());
        }*/
    override void Export(EditorSaveData data, string file, ExportSettings settings)
    {
        EditorLog.Trace("EditorTerrainBuilderFile::Export");
        FileHandle handle = OpenFile(file, FileMode.WRITE);
        if (!handle)
        {
            EditorLog.Error("File in use %1", file);
            return;
        }

        //EditorLog.Debug("-------");
        foreach (EditorObject o : GetEditor().GetPlacedObjects().GetValueArray())
        {
            if (!o) return;
            Object wo = o.GetWorldObject();
            if (!wo) return;

            /*vector pos = wo.GetPosition();
            float tl = GetGame().SurfaceY(pos[0], pos[2]);

            o.EnablePhysics(true);
            vector center = dBodyGetCenterOfMass(wo);
            o.EnablePhysics(false);

            vector min_max[2] = {o.GetLineVertex(0), o.GetLineVertex(2)};
            vector bboxcenter = GetBoxCenter(min_max);

            auto e = IEntity.Cast(wo);

            EditorLog.Debug("- %1", wo.GetType());
            vector test = wo.GetPosition();
            EditorLog.Debug("Position:                              %1", test.ToString());
            EditorLog.Debug("GetYDistance:                          %1", o.GetYDistance().ToString());
            EditorLog.Debug("BottomCenter:                          %1", o.GetBottomCenter().ToString());
            EditorLog.Debug("TerrainHeight:                         %1", tl.ToString());
            EditorLog.Debug("Position-TerrainH:                     %1", (pos[1] - tl).ToString());
            test[1] = test[1] - o.GetYDistance();
            EditorLog.Debug("Position-GetYDistance:                 %1", test.ToString());
            test = wo.GetPosition();
            test[1] = test[1] - o.GetYDistance()*0.5;
            EditorLog.Debug("Position-GetYDistance*0.5:             %1", test.ToString());
            EditorLog.Debug("dBodyGetCenterOfMass:                  %1", center.ToString());
            EditorLog.Debug("ModelToWorld(dBodyGetCenterOfMass):    %1", wo.ModelToWorld(center).ToString());
            EditorLog.Debug("GetCenter:                             %1", wo.GetCenter().ToString());
            EditorLog.Debug("BoundingBoxBasePoint:                  %1", o.GetBasePoint().GetPosition().ToString());
            EditorLog.Debug("BoundingBoxCenter:                     %1", bboxcenter.ToString());
            EditorLog.Debug("ModelToWorld(BoundingBoxCenter):       %1", wo.ModelToWorld(bboxcenter).ToString());
            EditorLog.Debug("GetOrigin                              %1", e.GetOrigin().ToString());
            EditorLog.Debug("GetYawPitchRoll                        %1", e.GetYawPitchRoll().ToString());
            EditorLog.Debug("GetAngles                              %1", e.GetAngles().ToString());
            

            vector transformMat[4];
            e.GetTransform(transformMat);
            transformMat[0] = "1 0 0";
            transformMat[1] = "0 0 1";
            transformMat[2] = "0 -1 0";*/
            /*for (int i = 0; i < 4; i++)
            {
                vector v = transformMat[i];
                if (v[0] < 0.0000001) transformMat[i][0] = 0.0;
                if (v[1] < 0.0000001) transformMat[i][1] = 0.0;
                if (v[2] < 0.0000001) transformMat[i][2] = 0.0;
            }
            EditorLog.Debug("GetOrigin %1", e.GetOrigin().ToString());
            EditorLog.Debug("GetYawPitchRoll %1", e.GetYawPitchRoll().ToString());
            EditorLog.Debug("GetAngles %1", e.GetAngles().ToString());*/

            /*vector dir = transformMat[2];
            float dump = dir[1];
            dir[1] = dir[2];
            dir[2] = dump;
            EditorLog.Debug("dir  %1", dir.ToString());

            vector up = transformMat[1];
            dump = up[1];
            up[1] = up[2];
            up[2] = dump;
            EditorLog.Debug("up %1", up.ToString());

            dir = dir * Math.DEG2RAD;
            up = up * Math.DEG2RAD;

            vector rot = GetTerrainBuilderAngles(dir, up);
            vector TBTransform[3];
            GetArmaToTBTransform(rot, TBTransform);

            vector rotDeg = rot * Math.RAD2DEG;

            EditorLog.Debug("GetOrientation %1", o.Orientation.ToString());
            EditorLog.Debug("Rotation (rad) %1", rot.ToString());
            EditorLog.Debug("Rotation (deg) %1", rotDeg.ToString());

            //EditorLog.Debug("TBTransform[0] %1", TBTransform[0].ToString());
            //EditorLog.Debug("TBTransform[1] %1", TBTransform[1].ToString());
            //EditorLog.Debug("TBTransform[2] %1", TBTransform[2].ToString());

            vector TBGround = bboxcenter.Multiply3(TBTransform);
            //EditorLog.Debug("TBTransform %1", TBGround.ToString());

            vector TBScaledGround = TBGround * o.Scale;
            vector TBPosition = o.Position;
            float x1 = TBPosition[0] + 200000;
            float height1 = TBPosition[1] - TBScaledGround[1];
            float y1 = TBPosition[2];*/

            vector min_max[2] = { o.GetLineVertex(0), o.GetLineVertex(2) };
            vector bboxcenter = GetBoxCenter(min_max);

            vector position = o.Position; //o.Position;wo.ModelToWorld(bboxcenter)
            float height_offset = o.GetYDistance(); //Math.AbsFloat(position[1] - GetGame().SurfaceY(position[0], position[2]));
            int integer_part = Math.Floor(height_offset);
            float decimal_part = height_offset - integer_part;
            vector terrainbuilder_offset = Vector(200000, -integer_part, 0);
            position[1] = position[1] - decimal_part;

            // Get an inaccurate float addition as string
            TStringArray pos_string = accurate_vector_to_strings(position, terrainbuilder_offset);
            string x1 = pos_string.Get(0);
            string height1 = pos_string.Get(1);
            string y1 = pos_string.Get(2);

            string type1 = wo.GetType();
            string model_name1;
            if (type1.Contains("Land_"))
            {
                type1.Replace("Land_", "");
                model_name1 = type1;
            }
            else
            {
                model_name1 = GetGame().GetModelName(type1);
            }
            if (model_name1 == "UNKNOWN_P3D_FILE") continue;

            vector orientation = o.Orientation;
            string line1 = string.Format("\"%1\";%2;%3;%4;%5;%6;%7;%8;", model_name1, x1, y1, orientation[0], orientation[2], orientation[1], o.Scale, height1);
            FPrintln(handle, line1);

            EditorLog.Debug(line1);
            //EditorLog.Debug("-------");
        }

        CloseFile(handle);

        /*FileHandle handle = OpenFile(file, FileMode.WRITE);
        if (!handle) {
        	EditorLog.Error("File in use %1", file);
        	return;
        }
		
        vector terrainbuilder_offset = Vector(200000, 0, 0);
        foreach (EditorObjectData editor_object: data.EditorObjects) {
        	// "construction_house2";206638.935547;6076.024414;146.000015;0.000000;0.000000;1.000000;
        	// Name, X, Y, Yaw, Pitch, Roll, Scale, Relative Height			
        	vector position = editor_object.BottomCenter;		
        	//if (height_type == HeightType.RELATIVE)
        	position[1] = position[1] - GetGame().SurfaceY(position[0], position[2]);
        	
        	string type = editor_object.Type;
        	string model_name;
        	if (type.Contains("Land_")) {
        		type.Replace("Land_", "");
        		model_name = type;
        	} else {
        		model_name = GetGame().GetModelName(type);
        	}
        	
        	if (model_name == "UNKNOWN_P3D_FILE") {
        		continue;
        	}
        	
        	EditorLog.Debug("Exporting %1 with model of %2", editor_object.Type, model_name);
        	
        	vector orientation = editor_object.Orientation;
        	position += terrainbuilder_offset;
        	string line = string.Format("\"%1\";%2;%3;%4;%5;%6;%7;%8;", model_name, position[0], position[2], orientation[0], orientation[2], orientation[1], editor_object.Scale, position[1]);
        	FPrintln(handle, line);
        }
		
        CloseFile(handle);*/
    }

    // ianbanks | ianbanks@foxhound.international https://foxhound.international/sqf-snippets/export-arma-3-to-terrain-builder
    void GetArmaToTBTransform(vector center, out vector matrix[3])
    {
        float x = center[0];
        float y = center[1];
        float z = center[2];

        matrix[0] = Vector(Math.Cos(y) * Math.Cos(z) - Math.Sin(x) * Math.Sin(y) * Math.Sin(z), Math.Cos(z) * Math.Sin(x) * Math.Sin(y) + Math.Cos(y) * Math.Sin(z), Math.Cos(x) * Math.Sin(y));
        matrix[1] = Vector(-Math.Cos(x) * Math.Sin(z), Math.Cos(x) * Math.Cos(z), -Math.Sin(x));
        matrix[2] = Vector(-Math.Cos(z) * Math.Sin(y) - Math.Cos(y) * Math.Sin(x) * Math.Sin(z), Math.Cos(y) * Math.Cos(z) * Math.Sin(x) - Math.Sin(y) * Math.Sin(z), Math.Cos(x) * Math.Cos(y));
    }

    TStringArray get_float_parts(TStringArray parts, int which)
    {
        TStringArray final = new TStringArray;
        for (int i = 0; i < parts.Count(); i++)
        {
            string p = parts[i];
            TStringArray arr = new TStringArray;
            p.Split(".", arr);
            final.Insert(arr[which]);
        }
        return final;
    }
    TStringArray combine_floats_to_string(TStringArray int_parts, TStringArray decimal_parts)
    {
        if (int_parts.Count() != decimal_parts.Count())
        {
            EditorLog.Error("combine_floats_to_string part counts don't match: %1 != %2", int_parts.Count().ToString(), decimal_parts.Count().ToString());
            return new TStringArray;
        }

        EditorLog.Debug("int_parts %1", int_parts.ToString());
        EditorLog.Debug("decimal_parts %1", decimal_parts.ToString());

        TStringArray int_parts_parted = get_float_parts(int_parts, 0);
        TStringArray decimal_parts_parted = get_float_parts(decimal_parts, 1);

        EditorLog.Debug(">int_parts_parted %1", int_parts_parted.ToString());
        EditorLog.Debug(">decimal_parts_parted %1", decimal_parts_parted.ToString());

        TStringArray final = new TStringArray;
        for (int i = 0; i < int_parts_parted.Count(); i++)
        {
            final.Insert(int_parts_parted[i] + "." + decimal_parts_parted[i]);
        }

        return final;
    }

    TStringArray get_float_strings_from_vector(string floats)
    {
        TStringArray floats_arr = new TStringArray;
        floats.Split(" ", floats_arr);
        return floats_arr;
    }

    TStringArray accurate_vector_to_strings(vector floats, vector int_increment)
    {
        // Get an inaccurate float addition as string
        string string_floats_int = (floats + int_increment).ToString(false);
        string string_floats_dec = floats.ToString(false);
        EditorLog.Debug("string_floats_int %1", string_floats_int);
        EditorLog.Debug("string_floats_dec %1", string_floats_dec);

        TStringArray int_array = get_float_strings_from_vector(string_floats_int); // ["1", "1", "1"]
        TStringArray dec_array = get_float_strings_from_vector(string_floats_dec);

        return combine_floats_to_string(int_array, dec_array);
    }

    //returns center point of box defined by min/max values
    vector GetBoxCenter(vector min_max[2])
    {
        vector center;

        center[0] = (min_max[1][0] - min_max[0][0]) / 2;
        center[1] = (min_max[1][1] - min_max[0][1]) / 2;
        center[2] = (min_max[1][2] - min_max[0][2]) / 2;
        center = Vector(min_max[1][0] - center[0], min_max[1][1] - center[1], min_max[1][2] - center[2]); //offset to box center

        return center;
    }
}

/*
modded class EditorTerrainBuilderFile
{
    // ianbanks | ianbanks@foxhound.international https://foxhound.international/sqf-snippets/export-arma-3-to-terrain-builder
    vector[3] GetArmaToTBTransform(vector center)
    {
        float x = center[0];
        float y = center[1];
        float z = center[2];

        vector[3] matrix;
        matrix[x] = Vector(cos z * cos y - sin x * sin z * sin y, cos y * sin x * sin z + cos z * sin y, cos x * sin z);
        matrix[y] = Vector(-cos x * sin y, cos x * cos y, -sin x);
        matrix[z] = Vector(-cos y * sin z - cos z * sin x * sin y, cos z * cos y * sin x - sin z * sin y, cos x * cos z);
        return matrix;
    }

    vector MultiplyMatrixWithVector(vector[] matrix, vector vec) {
        return Vector(vector.Dot(matrix[0], vec), vector.Dot(matrix[0], vec), vector.Dot(matrix[0], vec))
    }

    TStringArray get_float_parts(TStringArray parts, int which)
    {
        TStringArray final = new TStringArray;
        for (int i = 0; i < parts.Count(); i++)
        {
            string p = parts[i];
            TStringArray arr = new TStringArray;
            p.Split(".", arr);
            final.Insert(arr[which]);
        }
        return final;
    }
    TStringArray combine_floats_to_string(TStringArray int_parts, TStringArray decimal_parts)
    {
            if (int_parts.Count() != decimal_parts.Count()) {
                EditorLog.Error("combine_floats_to_string part counts don't match: %1 != %2", int_parts.Count().ToString(), decimal_parts.Count().ToString());
                return new TStringArray;
            }

            EditorLog.Debug("int_parts %1", int_parts.ToString());
            EditorLog.Debug("decimal_parts %1", decimal_parts.ToString());

            TStringArray int_parts_parted = get_float_parts(int_parts, 0);
            TStringArray decimal_parts_parted = get_float_parts(decimal_parts, 1);

            EditorLog.Debug(">int_parts_parted %1", int_parts_parted.ToString());
            EditorLog.Debug(">decimal_parts_parted %1", decimal_parts_parted.ToString());

            TStringArray final = new TStringArray;
            for (int i = 0; i < int_parts_parted.Count(); i++)
            {
                final.Insert(int_parts_parted[i] + "." + decimal_parts_parted[i]);
            }

            return final;
    }

    TStringArray get_float_strings_from_vector(string floats)
    {
			TStringArray floats_arr = new TStringArray;
            floats.Split(" ", floats_arr);
            return floats_arr;
    }

    TStringArray accurate_vector_to_strings(vector floats, vector int_increment) {
            // Get an inaccurate float addition as string
            string string_floats_int = (floats + int_increment).ToString(false);
            string string_floats_dec = floats.ToString(false);
            EditorLog.Debug("string_floats_int %1", string_floats_int);
            EditorLog.Debug("string_floats_dec %1", string_floats_dec);
            
            TStringArray int_array = get_float_strings_from_vector(string_floats_int); // ["1", "1", "1"]
            TStringArray dec_array = get_float_strings_from_vector(string_floats_dec);

            return combine_floats_to_string(int_array, dec_array);
    }

    //returns center point of box defined by min/max values
	vector GetBoxCenter( vector min_max[2] )
	{
		vector center;
		
		center[0] = ( min_max[1][0] - min_max[0][0] ) / 2;
		center[1] = ( min_max[1][1] - min_max[0][1] ) / 2;
		center[2] = ( min_max[1][2] - min_max[0][2] ) / 2;
		center = Vector( min_max[1][0] - center[0], min_max[1][1] - center[1], min_max[1][2] - center[2] ); //offset to box center
		
		return center;
	}

	override void Export(EditorSaveData data, string file, ExportSettings settings)
	{
		EditorLog.Trace("EditorTerrainBuilderFile::Export");
        
        EditorLog.Debug("-------");
        foreach(EditorObject o : GetEditor().GetPlacedObjects().GetValueArray())
        {
            if (!o) return;
            Object wo = o.GetWorldObject();
            if (!wo) return;
            
            vector pos = wo.GetPosition();
            float tl = GetGame().SurfaceY(pos[0], pos[2]);

            o.EnablePhysics(true);
            vector center = dBodyGetCenterOfMass(wo);
            o.EnablePhysics(false);

            vector min_max[2] = {o.GetLineVertex(0), o.GetLineVertex(2)};
            vector bboxcenter = GetBoxCenter(min_max);

            EditorLog.Debug("- %1", wo.GetType());
            vector test = wo.GetPosition();
            EditorLog.Debug("Position:                              %1", test.ToString());
            EditorLog.Debug("GetYDistance:                          %1", o.GetYDistance().ToString());
            EditorLog.Debug("BottomCenter:                          %1", o.GetBottomCenter().ToString());
            EditorLog.Debug("TerrainHeight:                         %1", tl.ToString());
            EditorLog.Debug("Position-TerrainH:                     %1", (pos[1] - tl).ToString());
            test[1] = test[1] - o.GetYDistance();
            EditorLog.Debug("Position-GetYDistance:                 %1", test.ToString());
            test = wo.GetPosition();
            test[1] = test[1] - o.GetYDistance()*0.5;
            EditorLog.Debug("Position-GetYDistance*0.5:             %1", test.ToString());
            EditorLog.Debug("dBodyGetCenterOfMass:                  %1", center.ToString());
            EditorLog.Debug("ModelToWorld(dBodyGetCenterOfMass):    %1", wo.ModelToWorld(center).ToString());
            EditorLog.Debug("GetCenter:                             %1", wo.GetCenter().ToString());
            EditorLog.Debug("BoundingBoxBasePoint:                  %1", o.GetBasePoint().GetPosition().ToString());
            EditorLog.Debug("BoundingBoxCenter:                     %1", bboxcenter.ToString());
            EditorLog.Debug("ModelToWorld(BoundingBoxCenter):       %1", wo.ModelToWorld(bboxcenter).ToString());
            
            vector[3] TBTransform = GetArmaToTBTransform(o.Position);
            vector TBGround = MultiplyMatrixWithVector(TBTransform, wo.WorldToModel(wo.GetCenter()));
            vector TBScaledGround = TBGround * o.Scale;
            vector TBPosition = o.Position - Vector(0,0, TBScaledGround[2]) + Vector(200000,0,0);
            float x = TBPosition[0];
            float height = TBPosition[1];
            float y = TBPosition[2];
            vector orientation = o.Orientation;

			string type = o.Type;
			string model_name;
			if (type.Contains("Land_")) {
				type.Replace("Land_", "");
				model_name = type;
			} else {
				model_name = GetGame().GetModelName(type);
			}
			if (model_name == "UNKNOWN_P3D_FILE") continue;

			string line = string.Format("\"%1\";%2;%3;%4;%5;%6;%7;%8;", model_name, x, y, orientation[0], orientation[2], orientation[1], o.Scale, height);

            EditorLog.Debug("-------");
        }
		
		FileHandle handle = OpenFile(file, FileMode.WRITE);
		if (!handle) {
			EditorLog.Error("File in use %1", file);
			return;
		}
		
        // Only integers are added
		vector terrainbuilder_offset = Vector(200000, 0, 0);
		foreach (EditorObjectData editor_object: data.EditorObject) {
			// "construction_house2";206638.935547;6076.024414;146.000015;0.000000;0.000000;1.000000;
			// Name, X, Y, Yaw, Pitch, Roll, Scale, Relative Height			
			vector position = editor_object.Position;
            float height_offset = editor_object.GetYDistance()[1];//Math.AbsFloat(position[1] - GetGame().SurfaceY(position[0], position[2]));
            int integer_part = Math.Floor(height_offset);
            terrainbuilder_offset[1] = -integer_part;
            position[1] = position[1] - (height_offset - integer_part);
            EditorLog.Debug("position...................%1", position.ToString());
            EditorLog.Debug("terrainbuilder_offset......%1", terrainbuilder_offset.ToString());
			//if (height_type == HeightType.RELATIVE)
            
            // Get an inaccurate float addition as string
            TStringArray pos_string = accurate_vector_to_strings(position, terrainbuilder_offset);
            string x = pos_string.Get(0);
            string height = pos_string.Get(1);
            string y = pos_string.Get(2);
            
			string type = editor_object.Type;
			string model_name;
			if (type.Contains("Land_")) {
				type.Replace("Land_", "");
				model_name = type;
			} else {
				model_name = GetGame().GetModelName(type);
			}
			
			if (model_name == "UNKNOWN_P3D_FILE") {
				continue;
			}
			
			EditorLog.Debug("Exporting %1 with model of %2", editor_object.Type, model_name);
			
			vector orientation = editor_object.Orientation;
			string line = string.Format("\"%1\";%2;%3;%4;%5;%6;%7;%8;", model_name, x, y, orientation[0], orientation[2], orientation[1], editor_object.Scale, height);
			FPrintln(handle, line);
		}
		
		CloseFile(handle);
	}
	
	override string GetExtension() {
		return ".txt";
	}
}*/

modded class EditorObject
{
    vector GetLineVertex(int at)
    {
        return m_LineVerticies[at];
    }

    Object GetBasePoint()
    {
        return m_BasePoint;
    }
}

