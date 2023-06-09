# Trerik4 / NYHEIM

## License
The license in this repository applies to the code and assets related to the map only. **The data and external dependencies are licensed separately.**

### Code and assets by Kerkkoh

MIT License. See `LICENSE` at root of this repository.

### Any other assets and external dependencies

Please see `LICENSE` files in each data package for more information. These assets are NOT covered by the MIT License.

## Installation

1. This repository contains GIT Large File Storage -files. You may have to [install Git LFS](https://docs.github.com/en/repositories/working-with-files/managing-large-files/installing-git-large-file-storage) by simply running the command `git lfs install`.
2. Now you can clone this repository with `git clone git@github.com:kerkkoh/nyheim.git`
3. Rename this repository folder as `trerik4` and place it in your P-drive. Use Terrain Builder to open up the terrain project file in the `source` folder.
4. To pack the terrain, use pboProject from Mikero's Tools. You can find the tools from [here](https://mikero.bytex.digital/Downloads).
5. In your pboProject settings, disable "Warnings are errors" (warnings should be ignored), and add "*.nm" under -B ignore list, to have it not be binarized. Otherwise, pboProject will not be able to pack the navmesh.
6. You can also use the `pack.bat` file in the `source` folder to pack the terrain, BUT you have to open the bat script and change the initial configuration for folders to match your setup.

## Contents

- .vscode             (VSCode workspace) - `LICENSE` for license
- ce                  (Central economy files) - `LICENSE` for license
- city                (Custom city assets) - See each `city/.../LICENSE` file in **each folder separately**. Many assets are licensed under CGTrader royalty free license.
- clothing            (Clothing assets) - see `clothing/LICENSE` for license
- data                (Layers and map data) - see `data/LICENSE` for license
- DayZRPNyheim.bikey  (Server key) - see `LICENSE` for license
- dpl                 (Files licensed under Arma and Dayz Public License Share Alike) - [ADPL-SA](https://www.bohemia.net/community/licenses/arma-and-dayz-public-license-share-alike-adpl-sa)
- extra               (Extra data, skybox, etc.) - see `extra/LICENSE` for license
- lessdoors           (Contains openable door assets, which can be used for modular building) - see `lessdoors/LICENSE` for license
- LICENSE             MIT License, Copyright Kerkkoh 2023 - Applies to code, assets, and the terrain, which don't have a specific license.
- military            (Military assets) - see `military/LICENSE` for license. Most assets are licensed under CGTrader royalty free license with exceptions.
- nature              (Rocks and other nature assets) - see `nature/LICENSE` for license. Most assets are licensed under CGTrader royalty free license with exceptions.
- navmesh             (Navmesh files) - see `LICENSE` for license
- README.md           This file
- roads               (Road assets) - see `roads/LICENSE` for license. These are mostly modified DayZ/Arma assets, thus licensed under ADPL-SA.
- scripts             (Scripts) - see `LICENSE` for license
- snow                (Unused snow assets) - see `snow/LICENSE` for license
- sounds              (Sounds) - see `sounds/LICENSE` for license, if you want to listen to more of this music check out [Kerkkoh's Soundcloud](https://soundcloud.com/projectsnowred)
- source              (Source files for the terrain) - see `LICENSE` for license
- train               (Static and non-static train assets) - see `train/LICENSE` for license. Models by Misho
- world               (World assets) - see `LICENSE` for license.

## System requirements

This terrain is rather heavy due to the amount of objects in a small area. The server for running the terrain should have rather fast CPU and a good amount of fast RAM.

Recommended:
- >= GTX1070
- >= AMD Ryzen 5 3600X
- >= 8 GB of RAM
