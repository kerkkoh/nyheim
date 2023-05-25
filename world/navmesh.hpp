class Navmesh
{
	navmeshName = "\trerik4\navmesh\navmesh.nm";
	filterIsolatedIslandsOnLoad = 1;
	visualiseOffset = 0.0;
	class GenParams
	{
		tileWidth = 50.0;
		cellSize1 = 0.25;
		cellSize2 = 0.1;
		cellSize3 = 0.1;
		filterIsolatedIslands = 1;
		seedPosition[] = {2560,0,2560};
		class Agent
		{
			diameter = 0.6;
			standHeight = 1.5;
			crouchHeight = 1.0;
			proneHeight = 0.5;
			maxStepHeight = 0.45;
			maxSlope = 60.0;
		};
		class Links
		{
			class ZedJump387_050
			{
				jumpLength = 1.5;
				jumpHeight = 0.5;
				minCenterHeight = 0.3;
				jumpDropdownMin = 0.5;
				jumpDropdownMax = -0.5;
				areaType = "jump0";
				flags[] = {"jumpOver"};
				color = 1727987712;
			};
			class ZedJump388_050
			{
				jumpLength = 1.5;
				jumpHeight = 0.5;
				minCenterHeight = -0.5;
				jumpDropdownMin = 0.5;
				jumpDropdownMax = -0.5;
				areaType = "jump0";
				flags[] = {"jumpOver"};
				color = 1725781248;
			};
			class ZedJump387_110
			{
				jumpLength = 3.9;
				jumpHeight = 1.1;
				minCenterHeight = 0.5;
				jumpDropdownMin = 0.5;
				jumpDropdownMax = -0.5;
				areaType = "jump0";
				flags[] = {"jumpOver"};
				color = 1711308800;
			};
			class ZedJump420_160
			{
				jumpLength = 4.0;
				jumpHeight = 1.6;
				minCenterHeight = 1.1;
				jumpDropdownMin = 0.5;
				jumpDropdownMax = -0.5;
				areaType = "jump0";
				flags[] = {"jumpOver"};
				color = 1711276287;
			};
			class ZedJump265_210
			{
				jumpLength = 2.45;
				jumpHeight = 2.5;
				minCenterHeight = 1.8;
				jumpDropdownMin = 0.5;
				jumpDropdownMax = -0.5;
				areaType = "jump0";
				flags[] = {"climb"};
				color = 1720975571;
			};
			class Fence50_110deer
			{
				typeId = 100;
				jumpLength = 8.0;
				jumpHeight = 1.1;
				minCenterHeight = 0.5;
				jumpDropdownMin = 1.0;
				jumpDropdownMax = -1.0;
				areaType = "jump2";
				flags[] = {"jumpOver"};
				color = 1722460927;
			};
			class Fence110_160deer
			{
				typeId = 101;
				jumpLength = 8.0;
				jumpHeight = 1.6;
				minCenterHeight = 1.1;
				jumpDropdownMin = 1.0;
				jumpDropdownMax = -1.0;
				areaType = "jump3";
				flags[] = {"jumpOver"};
				color = 1713700856;
			};
			class Fence50_110hen
			{
				typeId = 110;
				jumpLength = 4.0;
				jumpHeight = 1.1;
				minCenterHeight = 0.5;
				jumpDropdownMin = 0.5;
				jumpDropdownMax = -0.5;
				areaType = "jump4";
				flags[] = {"jumpOver"};
				color = -22016;
			};
			class Fence110_160hen
			{
				typeId = 111;
				jumpLength = 4.0;
				jumpHeight = 1.6;
				minCenterHeight = 1.1;
				jumpDropdownMin = 0.5;
				jumpDropdownMax = -0.5;
				areaType = "jump4";
				flags[] = {"jumpOver"};
				color = -22016;
			};
		};
	};
};