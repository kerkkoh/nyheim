<?xml version="1.0" encoding="UTF-8"?>
<Project>
    <Version>79</Version>
    <Name>trerik-new-forest</Name>
    <ExportSettings>
        <Directory></Directory>
        <ExportLBT>1</ExportLBT>
        <ExportTXT>1</ExportTXT>
        <ExportSHP>0</ExportSHP>
    </ExportSettings>
    <Tasks>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\leafy_forest.shp</Shapefile>
            <TaskName>Area: Random</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>0</Enabled>
            <Notes>Notes</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="80"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_prunusSpinosa_1s"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\leafy_forest.shp</Shapefile>
            <TaskName>Area: High-density Cluster</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Notes</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="90"/>
                <Parameter Name="Hectare density" Type="0" Value="120"/>
                <Parameter Name="Fraction" Type="0" Value="1"/>
                <Parameter Name="Blend distance" Type="0" Value="10"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_betulaHumilis_1s"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="b_prunusSpinosa_1s"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\leafy_forest.shp</Shapefile>
            <TaskName>Area: Random</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Notes</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="790"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_BetulaPendula_3s"/>
                    <Parameter Name="PROB" Value="60"/>
                    <Parameter Name="MINHEIGHT" Value="70"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="4"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_BetulaPendula_3fc"/>
                    <Parameter Name="PROB" Value="30"/>
                    <Parameter Name="MINHEIGHT" Value="70"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="4"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_BetulaPendula_3fb"/>
                    <Parameter Name="PROB" Value="30"/>
                    <Parameter Name="MINHEIGHT" Value="70"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="4"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_BetulaPendula_3f"/>
                    <Parameter Name="PROB" Value="15"/>
                    <Parameter Name="MINHEIGHT" Value="70"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="4"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_BetulaPendula_2w"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="70"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="4"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_BetulaPendula_2s"/>
                    <Parameter Name="PROB" Value="25"/>
                    <Parameter Name="MINHEIGHT" Value="70"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="4"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_BetulaPendula_2fc"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="70"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="4"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_BetulaPendula_2fb"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="70"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="4"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_BetulaPendula_2f"/>
                    <Parameter Name="PROB" Value="10"/>
                    <Parameter Name="MINHEIGHT" Value="70"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="4"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_BetulaPendula_1s"/>
                    <Parameter Name="PROB" Value="10"/>
                    <Parameter Name="MINHEIGHT" Value="70"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_BetulaPendula_1fb"/>
                    <Parameter Name="PROB" Value="10"/>
                    <Parameter Name="MINHEIGHT" Value="70"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_BetulaPendula_1f"/>
                    <Parameter Name="PROB" Value="10"/>
                    <Parameter Name="MINHEIGHT" Value="70"/>
                    <Parameter Name="MAXHEIGHT" Value="130"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\forest_mask_polygons.shp</Shapefile>
            <TaskName>Mask: Area</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Notes</Notes>
            <Parameters>
                <Parameter Name="Remove objects" Type="0" Value="Inside"/>
            </Parameters>
            <ObjectPrototypes/>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\forest_mask_polylines.shp</Shapefile>
            <TaskName>Mask: Linear</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Notes</Notes>
            <Parameters>
                <Parameter Name="Objects distance" Type="0" Value="8"/>
                <Parameter Name="Spline interpolation" Type="0" Value="0"/>
            </Parameters>
            <ObjectPrototypes/>
            <AdditionalDatabases/>
        </Task>
    </Tasks>
</Project>
