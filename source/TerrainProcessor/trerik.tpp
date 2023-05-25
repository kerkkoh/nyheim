<?xml version="1.0" encoding="UTF-8"?>
<Project>
    <Version>79</Version>
    <Name>stuartisland</Name>
    <ExportSettings>
        <Directory></Directory>
        <ExportLBT>1</ExportLBT>
        <ExportSHP>0</ExportSHP>
    </ExportSettings>
    <Tasks>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\forest_polygons.shp</Shapefile>
            <TaskName>Area: Random</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>0</Enabled>
            <Notes>Forest stones</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="424"/>
                <Parameter Name="Hectare density" Type="0" Value="20"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="rock_apart1"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="60"/>
                    <Parameter Name="MAXHEIGHT" Value="70"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="rock_apart2"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone1"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="140"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone2"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="140"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone3"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="140"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone4"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="140"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone5"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="140"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>shapes\smallerroads.shp</Shapefile>
            <TaskName>Mask: Linear</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>0</Enabled>
            <Notes>Notes</Notes>
            <Parameters>
                <Parameter Name="Objects distance" Type="0" Value="6"/>
                <Parameter Name="Spline interpolation" Type="0" Value="0"/>
            </Parameters>
            <ObjectPrototypes/>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\low_dens_forest.shp</Shapefile>
            <TaskName>Area: Random</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>0</Enabled>
            <Notes>Upper low density forest gen</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="45"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_2s"/>
                    <Parameter Name="PROB" Value="10"/>
                    <Parameter Name="MINHEIGHT" Value="20"/>
                    <Parameter Name="MAXHEIGHT" Value="50"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_1f"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="60"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_1s"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="50"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_stump"/>
                    <Parameter Name="PROB" Value="6"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_stumpb"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_fallenb"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="3"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\low_dens_forest.shp</Shapefile>
            <TaskName>Area: Random</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>0</Enabled>
            <Notes>Upper low density rocks</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="3"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="rock_apart2"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="30"/>
                    <Parameter Name="MAXHEIGHT" Value="50"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone1"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone2"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone3"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone4"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone5"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\forest_polygons.shp</Shapefile>
            <TaskName>Area: Random</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>0</Enabled>
            <Notes>Forest</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="250"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_3f"/>
                    <Parameter Name="PROB" Value="35"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_2f"/>
                    <Parameter Name="PROB" Value="25"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_2s"/>
                    <Parameter Name="PROB" Value="25"/>
                    <Parameter Name="MINHEIGHT" Value="70"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_3s"/>
                    <Parameter Name="PROB" Value="0"/>
                    <Parameter Name="MINHEIGHT" Value="40"/>
                    <Parameter Name="MAXHEIGHT" Value="90"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_1f"/>
                    <Parameter Name="PROB" Value="15"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_1s"/>
                    <Parameter Name="PROB" Value="15"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_stump"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_stumpb"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_fallenb"/>
                    <Parameter Name="PROB" Value="3"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="3"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_fallen"/>
                    <Parameter Name="PROB" Value="3"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="3"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_piceaabies_2d"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_piceaabies_3d"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\forest_polygons.shp</Shapefile>
            <TaskName>Area: Random</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>0</Enabled>
            <Notes>Forest rocks</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="3"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="rock_apart1"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="30"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="rock_apart2"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="30"/>
                    <Parameter Name="MAXHEIGHT" Value="50"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone1"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone2"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone3"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone4"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone5"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\high_dens_forest.shp</Shapefile>
            <TaskName>Area: Random</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>0</Enabled>
            <Notes>HIGH DENSITY FOREST</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="350"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_3f"/>
                    <Parameter Name="PROB" Value="35"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_2f"/>
                    <Parameter Name="PROB" Value="25"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_2s"/>
                    <Parameter Name="PROB" Value="25"/>
                    <Parameter Name="MINHEIGHT" Value="70"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_3s"/>
                    <Parameter Name="PROB" Value="0"/>
                    <Parameter Name="MINHEIGHT" Value="40"/>
                    <Parameter Name="MAXHEIGHT" Value="90"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_1f"/>
                    <Parameter Name="PROB" Value="15"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_1s"/>
                    <Parameter Name="PROB" Value="15"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_stump"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_stumpb"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_fallenb"/>
                    <Parameter Name="PROB" Value="3"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="3"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_fallen"/>
                    <Parameter Name="PROB" Value="3"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="3"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_piceaabies_2d"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_piceaabies_3d"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\high_dens_forest.shp</Shapefile>
            <TaskName>Area: Random</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>0</Enabled>
            <Notes>HIGH DENSITY ROCKS</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="5"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="rock_apart1"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="30"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="rock_apart2"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="30"/>
                    <Parameter Name="MAXHEIGHT" Value="50"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone1"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone2"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone3"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone4"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone5"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\forest8.shp</Shapefile>
            <TaskName>Area: Random</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>0</Enabled>
            <Notes>8x8 HIGH DENSITY</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="350"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_3f"/>
                    <Parameter Name="PROB" Value="35"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_2f"/>
                    <Parameter Name="PROB" Value="25"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_2s"/>
                    <Parameter Name="PROB" Value="25"/>
                    <Parameter Name="MINHEIGHT" Value="70"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_3s"/>
                    <Parameter Name="PROB" Value="0"/>
                    <Parameter Name="MINHEIGHT" Value="40"/>
                    <Parameter Name="MAXHEIGHT" Value="90"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_1f"/>
                    <Parameter Name="PROB" Value="15"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_1s"/>
                    <Parameter Name="PROB" Value="15"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_stump"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_stumpb"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_fallenb"/>
                    <Parameter Name="PROB" Value="3"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="3"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_fallen"/>
                    <Parameter Name="PROB" Value="3"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="3"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_piceaabies_2d"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_piceaabies_3d"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="80"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\forest8.shp</Shapefile>
            <TaskName>Area: Random</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>0</Enabled>
            <Notes>8x8 HIGH DENSITY ROCKS</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="5"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="rock_apart1"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="30"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="rock_apart2"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="30"/>
                    <Parameter Name="MAXHEIGHT" Value="50"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone1"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone2"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone3"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone4"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone5"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\forest8_low_dens.shp</Shapefile>
            <TaskName>Area: Random</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>8x8 HIGH DENSITY LOW DENSITY forest</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="45"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_2s"/>
                    <Parameter Name="PROB" Value="10"/>
                    <Parameter Name="MINHEIGHT" Value="20"/>
                    <Parameter Name="MAXHEIGHT" Value="50"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_1f"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="60"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="t_PiceaAbies_1s"/>
                    <Parameter Name="PROB" Value="100"/>
                    <Parameter Name="MINHEIGHT" Value="50"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="1"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_stump"/>
                    <Parameter Name="PROB" Value="6"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="110"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_stumpb"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="2"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="d_piceaabies_fallenb"/>
                    <Parameter Name="PROB" Value="1"/>
                    <Parameter Name="MINHEIGHT" Value="100"/>
                    <Parameter Name="MAXHEIGHT" Value="100"/>
                    <Parameter Name="MINDIST" Value="3"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\forest8_low_dens.shp</Shapefile>
            <TaskName>Area: Random</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>8x8 HIGH DENSITY LOW DENSITY rocks</Notes>
            <Parameters>
                <Parameter Name="Random seed" Type="0" Value="100"/>
                <Parameter Name="Hectare density" Type="0" Value="3"/>
            </Parameters>
            <ObjectPrototypes>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="rock_apart2"/>
                    <Parameter Name="PROB" Value="2"/>
                    <Parameter Name="MINHEIGHT" Value="30"/>
                    <Parameter Name="MAXHEIGHT" Value="50"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone1"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone2"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone3"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone4"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
                <ObjectPrototype>
                    <Parameter Name="OBJECT" Value="stone5"/>
                    <Parameter Name="PROB" Value="20"/>
                    <Parameter Name="MINHEIGHT" Value="90"/>
                    <Parameter Name="MAXHEIGHT" Value="120"/>
                    <Parameter Name="MINDIST" Value="5"/>
                </ObjectPrototype>
            </ObjectPrototypes>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\forest8.shp</Shapefile>
            <TaskName>Mask: Area</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>8x8 HIGH DENSITY LOW DENSITY main forest mask</Notes>
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
            <Notes>Road mask</Notes>
            <Parameters>
                <Parameter Name="Objects distance" Type="0" Value="9"/>
                <Parameter Name="Spline interpolation" Type="0" Value="0"/>
            </Parameters>
            <ObjectPrototypes/>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\forest_mask_polygons.shp</Shapefile>
            <TaskName>Mask: Area</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>General forest mask</Notes>
            <Parameters>
                <Parameter Name="Remove objects" Type="0" Value="Inside"/>
            </Parameters>
            <ObjectPrototypes/>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\forest_polygons.shp</Shapefile>
            <TaskName>Mask: Area</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>Main forest mask to remove low dens</Notes>
            <Parameters>
                <Parameter Name="Remove objects" Type="0" Value="Inside"/>
            </Parameters>
            <ObjectPrototypes/>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\low_dens_forest.shp</Shapefile>
            <TaskName>Mask: Area</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>HIGH DENS FOREST mask to remove low dens</Notes>
            <Parameters>
                <Parameter Name="Remove objects" Type="0" Value="Inside"/>
            </Parameters>
            <ObjectPrototypes/>
            <AdditionalDatabases/>
        </Task>
        <Task>
            <Shapefile>P:\trerik4\source\shapefiles\new_low_dens_forest.shp</Shapefile>
            <TaskName>Mask: Area</TaskName>
            <DEMInputFilename></DEMInputFilename>
            <DEMOutputFilename></DEMOutputFilename>
            <Enabled>1</Enabled>
            <Notes>HIGH DENS FOREST mask to remove low dens</Notes>
            <Parameters>
                <Parameter Name="Remove objects" Type="0" Value="Inside"/>
            </Parameters>
            <ObjectPrototypes/>
            <AdditionalDatabases/>
        </Task>
    </Tasks>
</Project>
