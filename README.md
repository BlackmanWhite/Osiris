# Osiris [![C++](https://img.shields.io/badge/language-C%2B%2B-%23f34b7d.svg)](https://en.wikipedia.org/wiki/C%2B%2B) [![CS:GO](https://img.shields.io/badge/game-CS%3AGO-yellow.svg)](https://store.steampowered.com/app/730/CounterStrike_Global_Offensive/) [![Windows](https://img.shields.io/badge/platform-Windows-0078d7.svg)](https://en.wikipedia.org/wiki/Microsoft_Windows) [![x86](https://img.shields.io/badge/arch-x86-red.svg)](https://en.wikipedia.org/wiki/X86) [![License](https://img.shields.io/github/license/danielkrupinski/Osiris.svg)](LICENSE) ![](https://img.shields.io/github/issues/danielkrupinski/Osiris.svg)

Free open-source training software / cheat for **Counter-Strike: Global Offensive** game. Designed as internal cheat - [Dynamic-link library](https://en.wikipedia.org/wiki/Dynamic-link_library) (DLL) loadable into game process. Compatible with the latest version of the game on Steam.

## Features
* **Aimbot** - aim assistance
* **Triggerbot** - automatically fires when crosshair is on enemy
* **Backtrack** - abuse lag compensation to move players back in time
* **Glow** - render glow effect on entities
* **Chams** - color player models to improve visibility
* **Esp** - show information about players
* **Visuals** - miscellaneous visual options
* **Skin changer** - change weapon skins, knives and stickers
* **Sound** - modify volume of certain sound effects
* **Misc** - miscellaneous features
* **Reportbot** - automatically report players on server for cheating or other abusive actions
* **Config** - JSON-based configuration system

<details>
<summary>Features in depth</summary>

* **Aimbot** - aim assistance
    * **Enabled** - on / off master switch
    * **On key [ key ]** - aimbot works only when chosen key is being held
    * **Silent** - aimbot is not visible on your screen (client-sided only)
    * **Friendly fire** - treat allies as enemies
    * **Visible only** - aim only on visible players
    * **Scoped only** - aimbot works only when using scope (applies only to sniper rifles)
    * **Ignore flash** - ignore flashbang i.e. aim when local player is flashed
    * **Ignore smoke** - ignore smoke i.e. aim when target is in smoke
    * **Auto shot** - shoot automatically when target found
    * **Auto scope** - automatically scopes sniper rifle before shooting
    * **Recoil-based fov** - aimbot uses recoil as fov origin
    * **Bone** - bone which aimbot aims at
    * **Fov** - field-of-view which aimbot operates [*0*-*255*]
    * **Max angle delta** - maximum viewangles change per tick
    * **Smooth** - smooth aimbot movement in order to seem more human-like
    * **Recoil control x** - horizontal recoil control factor
    * **Recoil control y** - vertical recoil control factor
    * **Max aim inaccuracy** - maximum weapon inaccuracy allowing aimbot to run, lowering this value will e.g. disable aimbot while jumping or running

* **Triggerbot** - automatically fires when crosshair is on enemy
    * **Enabled** - on / off master switch
    * **On key [ key ]** - triggerbot works only when chosen key is being held
    * **Friendly fire** - treat allies as enemies
    * **Scoped only** - triggerbot works only when using scope (applies only to sniper rifles)
    * **Ignore flash** - ignore flashbang i.e. shoot when local player is flashed
    * **Ignore smoke** - ignore smoke i.e. shoot when target is in smoke
    * **Hitgroup** - body parts on which triggerbot works
    * **Shot delay** - delay time in ms (milliseconds)
    
* **Backtrack** - abuse lag compensation in order to move players back in time
    * **Enabled** - on / off master switch
    * **Ignore smoke** - ignore smoke i.e. backtrack when target is in smoke
    * **Time limit** - limit the backtracking window [*1*-*200*ms]

* **Glow** - render glow effect on entities

    *Allies, Enemies, Planting (player planting bomb), Defusing (player defusing bomb), Local player, Weapons (dropped weapons), C4, Planted C4, Chickens, Defuse kits, Projectiles, Hostages, Ragdolls* **/** *All, Visible, Occluded*

    * **Enabled** - on / off master switch
    * **Health based** - color is based on player's hp
    * **Rainbow** - change color frequently
    * **Thickness** - outline thickness
    * **Alpha** - outline alpha
    * **Style** - glow style [*0*-*3*]

* **Chams** - color player models to improve visibility

    *Allies, Enemies, Planting (player planting bomb), Defusing (player defusing bomb), Local player, Weapons (dropped weapons), Hands (view model hands), Backtrack (requires backtrack to be enabled)* **/** *All, Visible, Occluded*
    * **Enabled** - on / off master switch
    * **Health based** - color is based on player's hp
    * **Rainbow** - change color frequently
    * **Blinking** - change transparency frequently
    * **Material** - material applied to model (*Normal, Flat, Animated, Platinum,Glass, Chrome, Crystal, Silver, Gold, Plastic*)
    * **Wireframe** - render triangle mesh instead of solid material
    * **Alpha** - maximum material transparency

* **Esp** - show information about players

    *Allies, Enemies* **/** *All, Visible, Occluded*

    * **Enabled** - on / off master switch
    * **Font** - esp text font number (from `vgui_spew_fonts` command)
    * **Snaplines** - draw snapline to player
    * **Eye traces** - draw player eye traces (shows where player looks)
    * **Box** - draw 2D box over player model
    * **Name** - draw player name
    * **Health** - draw player health
    * **Health bar** - draw rectangle indicating player health
    * **Armor** - draw player armor
    * **Armor bar** - draw rectangle indicating player armor
    * **Money** - draw player money
    * **Head dot** - draw dot on player's head

* **Visuals** - miscellaneous visual options
    * **Disable post-processing** - disable post-processing effects in order to increase FPS
    * **Inverse ragdoll gravity** - inverse gravitational acceleration on falling player ragdoll corpse (during death sequence)
    * **No fog** - remove fog from map for better visibility
    * **No 3d sky** - remove 3d skybox from map - increases FPS
    * **No visual recoil** - remove visual recoil punch effect
    * **No hands** - remove arms / hands model from first-person view
    * **No sleeves** - remove sleeves model from first-person view
    * **No weapons** - remove weapons model from first-person view
    * **No smoke** - remove smoke grenade effect
    * **No blur** - remove blur
    * **No scope overlay** - remove black overlay while scoping
    * **No grass** - remove grass from map in Danger Zone mode (`dz_blacksite` and `dz_sirocco` maps)
    * **No shadows** - disable dynamic shadows
    * **Wireframe smoke** - render smoke skeleton instead of particle effect
    * **Zoom [ key ]** - enable zoom on unzoomable weapons
    * **Thirdperson** - thirdperson view
    * **Thirdperson distance** - camera distance in thirdperson view
    * **View model FOV** - change view model FOV [*-60*-*0*-*60*] (0 - actual view model, negative values - decreased view model, positive values - increased view model)
    * **FOV** - change view FOV [*-60*-*0*-*60*] (0 - actual view fov, negative values - decreased, positive values - increased)
    * **Far Z** - far clipping range, useful after disabling fog on large maps (e.g `dz_sirocco`) to render distant buildings
    * **Flash reduction** - reduces flashbang grenade effect [*0*-*100*%] (0 - full flash, 100 - no flash)
    * **Brightness** - control game brightness [*0.0*-*1.0*]
    * **Skybox** - change sky(box)
    * **World color** - set world material ambient light color
    * **Deagle spinner** - play "spinning" inspect animation when holding Deagle
    * **Screen effect** - screenspace effect - *Drone cam, Drone cam with noise, Underwater, Healthboost, Dangerzone*

* **Skin changer** - change weapon skins, knives and stickers

* **Sound** - modify volume of certain sound effects
    * **Chicken volume** - volume of chicken sounds

    *Local player, Allies, Enemies*
    * **Master volume** - overall volume of sounds emitted by player
    * **Headshot volume** - volume of headshot sound (when player gets headshoted)
    * **Weapon volume** - volume of player weapon shots
    * **Footstep volume** - volume of player footsteps

* **Misc** - miscellaneous features
    * **Menu key [ key ]** - 
    * **Menu style** - menu style toggle (*Classic* **/** *One window*)
    * **Menu colors** - menu color theme (*Dark **/** Light **/** Classic*)
    * **Anti AFK kick** - avoid auto-kick by server for inactivity
    * **Auto strafe** - automatically strafe in air following mouse movement
    * **Bunny hop** - automatically simulate space bar press / release while jump button is being held; increases movement speed
    * **Clan tag** - set custom clan tag
    * **Animated clan tag** - animate clan tag
    * **Fast duck** - remove crouch delay
    * **Sniper crosshair** - draw crosshair while holding sniper rifle
    * **Recoil crosshair** - crosshair follows recoil pattern
    * **Auto pistol** - fire pistols like automatic rifles
    * **Auto reload** - automatically reload if weapon has empty clip
    * **Auto accept** - automatically accept competitive match
    * **Radar hack** - show enemies positions on radar
    * **Reveal ranks** - show player ranks in scoreboard in competitive modes
    * **Spectator list** - show nicknames of players spectating you
    * **Watermark** - show cheat name in upper-left screen corner and fps & ping in upper right corner.
    * **Fix animation LOD** - fix aimbot inaccuracy for players behind local player
    * **Fix bone matrix** - correct client bone matrix to be closer to server one
    * **Disable model occlusion** - draw player models even if they are behind thick walls
    * **Kill message** - print message to chat after killing an enemy
    * **Name stealer** - mimic other players names
    * **Fast plant** - plants bomb on bombsite border, when holding LMB or `E` key
    * **Prepare revolver [ key ]** - keep revolver cocked, optionally on key
    * **Hit Sound** - sound emitted when hurting enemy
    * **Chocked packets** - length of sequence of chocked ticks
    * **Unhook** - unload cheat

* **Reportbot** - automatically report players on server for cheating or other abusive actions
    * **Enabled** - on / off master switch
    * **Target** - report target *Enemies/Allies/All*
    * **Delay** - delay between reports, in seconds
    * **Aimbot** - report for aim assistance
    * **Wallhack** - report for visual assistance
    * **Other** - report for other assistance
    * **Griefing** - report for griefing
    * **Voice abuse** - report for voice abuse
    * **Text abuse** - report for text abuse

* **Config** - JSON-based configuration system
    * **Create config** - create new configuration file
    * **Reset config** - restore default configuration settings (does not touch saved configuration)
    * **Load selected** - load selected configuration file
    * **Save selected** - save selected configuration file
    * **Delete selected** - delete selected configuration file
</details>

## Getting started

### Prerequisites
Microsoft Visual Studio 2019 (preferably latest version i.e. 16.1.6), platform toolset v142 and Windows SDK 10.0 are required in order to compile Osiris. If you don't have ones, you can download VS [here](https://visualstudio.microsoft.com/) (Windows SDK is installed during Visual Studio Setup).

### Cloning
The very first step in order to compile Osiris is to clone this repo from GitHub to your local computer. Git is required to step futher, if not installed download it [here](https://git-scm.com). Open git bash / git cmd / cmd and enter following command:
```
git clone https://github.com/danielkrupinski/Osiris.git
```
`Osiris` folder should have been succesfully created, containing all the source files.

### Compiling from source

When you have equiped a copy of source code, next step is opening **Osiris.sln** in Microsoft Visual Studio 2019.

Then change build configuration to `Release | x86` and simply press **Build solution**.

If everything went right you should receive `Osiris.dll`  binary file.

### Loading / Injecting into game process

Open your favorite [DLL injector](https://en.wikipedia.org/wiki/DLL_injection) and just inject `Osiris.dll` into `csgo.exe` process.

When injected, menu is openable under `INSERT` key.


### Further optimizations
If your CPU supports AVX / AVX2 instruction set, you can enable it in project settings. This should result in more performant code, optimized for your CPU. Currently SSE2 instructions are selected in project settings.

## FAQ

### How do I open menu?
Press `INSERT` key while focused on CS:GO window.

### Where is my config file saved?
Configuration files are saved inside `Osiris` folder in your `Documents` folder (`%USERPROFILE%\Documents\Osiris`). The config is binary serialized so it is not meant to be edited by humans. Sometimes after updates configuration file needs to be deleted and recreated.

### What is cheat execution entry point and where is it located?
Osiris is based on six main global objects ("modules") - see [Osiris.cpp](https://github.com/danielkrupinski/Osiris/blob/master/Osiris/Osiris.cpp) file for detailes. The modules are initialized in the order they are declared in above file as they depend on each other.

## Acknowledgments

* [ocornut](https://github.com/ocornut) and [contributors](https://github.com/ocornut/imgui/graphs/contributors) for creating such amazing GUI library - [imgui](https://github.com/ocornut/imgui).
* [Zer0Mem0ry](https://github.com/Zer0Mem0ry) - for great tutorials on reverse engineering and game hacking

## License

> Copyright (c) 2018-2019 Daniel Krupiński

This project is licensed under the [MIT License](https://opensource.org/licenses/mit-license.php) - see the [LICENSE](LICENSE) file for details.

## See also
- [Anubis](https://github.com/danielkrupinski/Anubis) - free and open source cheat for CS:GO with configuration compatible with Osiris
