# The project

Ball game is a unreal multiplayer project made with Unreal 5_5.

# How to install

First install Unreal Engine 5.5.

On Linux: https://www.unrealengine.com/en-US/linux
On Windows:
https://www.unrealengine.com/fr/download

You can also build from source from the github repository :https://github.com/EpicGames/UnrealEngine (need to be in the Epic Games organization)

## Clone the repository

git clone https://github.com/Safirl/UEBallGame.git

### Linux

First you need to update your env variables to add your Unreal version directory.
```bash
nano .bashrc
```
Add the following line :
```
export UE_5_5_DIR="/opt/UnrealEngine/5.5/Engine"

#you can also add this to make the 5_5 your default version.
#export UE_ENGINE_DIR="$UE_5_5_DIR"
```

Then run the following script and wait for the vscode project files to generate.

```bash
#authorize tool.sh to be run
chmod +x ./Scripts/tool.sh

#generate project files
./Scripts/tool.sh -g
```

To run the project :

```bash
./Scripts/tool.sh -r
```

### Windows

Right click on the .uproject file and select Generate visual studio files. Then open the .sln and run the game in development | Editor.
