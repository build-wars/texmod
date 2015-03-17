# Universal Modding Engine (uMod) #



# General information #

**Warning**: uMod **_does not analyse or change_** the code or any data of the game (_with three exceptions: 1) hashing textures 2) saving textures and 3) the second injection method writes some data into the dll loading sequence of the game_). In uMod only source code is used, which can be downloaded in similar form from official Microsoft websites (_except injection method 2_). **BUT** uMod might be non-compliant to the **EULA** of some games!

uMod needs the **D3DX9\_43.dll (32bit)**. This dll is not included in the uMod package. If this dll is not installed on you computer, uMod will raise an error on start up. You can download this dll from the internet or install the latest [DirectX Enduser Runtime](http://www.microsoft.com/download/en/details.aspx?displaylang=en&id=35).

# At first start your game #

![https://sites.google.com/a/koerner-de.net/umod/_/rsrc/1332358399224/home/main.jpg](https://sites.google.com/a/koerner-de.net/umod/_/rsrc/1332358399224/home/main.jpg)

There are three methods how to get uMod work together with your game. Not each method does work on each OS with each game, so you can choose which method works and which method you like best. But use only one method for a game. For different games you can use different methods and you can also run more than one game at the same time (also with different methods).

After you have started the game a new tab for this game will open in uMod. In this tab you can load, activate, deactivate, or remove mods or you can save textures.

## Method 1 ##
Using a global hook.
  1. start uMod
    * add once the game to uMod (picture 1 point 3)
    * activate the hook through (picture 1 point 4)
  1. start the game (_e.g. double click on the desktop icon_)

## Method 2 ##
Start the game through uMod.
  1. start uMod
  1. start the game through uMod
    1. default (picture 1 point 1)
    1. if you want to parse command line options (picture 1 point 2)

## Method 3 ##
Let the game load our dll.
  1. copy our d3d9.dll into the games directory.
  1. start uMod
  1. start the game (_e.g. double click on the desktop icon_)


# Afterwards you can modify your game #

![https://sites.google.com/a/koerner-de.net/umod/_/rsrc/1332358408193/home/modding.jpg](https://sites.google.com/a/koerner-de.net/umod/_/rsrc/1332358408193/home/modding.jpg)

## Save textures from a game ##
See Picture 2 red rectangle.

You can choose whether uMod should save all texture which are loaded from the game or you can select the texture which should be saved. You have to set a save directory and in case you want to save single textures also 3 keys. By pressing "Update" you commit your changes.

While "save single texture" is turned on, you can toggle through all currently by the game loaded textures by pressing the back or the next key. The selected texture is unicolored dyed (default green). In the upper left corner the hash and the index of the texture is displayed. (_You cannot select textures which are already modified by uMod, you need to unload the mod before._)

If "save all textures" is turned on, uMod saves all textures, which get loaded by the game. This is done only in the moment, they get loaded by the game. You should turn this option on before entering a new map. (_You can also set it to true, save your option as template, set this template as default and start the game again, to save also textures, which get loaded on game start._)


While you are editing a texture, you can load this texture into the game to see how your changes take effect in the game. You need to press the reload button (picture 2 point 4).

You can simply pack all your edited textures into one zip-file and you can add a "Comment.txt". the comment will be displayed in uMod.

## Modify a game ##
See Picture 2 green rectangle.

To load Mods press (picture 2 point 2). You can:
  1. load each texture separately (`*_hash.dds`)
  1. load zip files
  1. load the **tpf** file from the original **TexMod**
For each texture or package (you add to uMod) a new list entry will appear in the tab window of uMod. If the tick mark is set, this mod is activated otherwise it is deactivated. By pressing "Update" you commit your changes.  By pressing "Update (reload)" you force uMod to reload the textures from disk, which is only needed if you are creating a mod and are editing the textures and like to see how your changes does effect the game.

If a texture is modified by more than one mod, then only the first mod in the list (which modify this texture) is taken into account. If this mod is deactivated, than the texture is not changed. You can change the order of the mods with the arrow buttons.

## Templates ##
You can save your settings as a template. For each game you can set one template as default. This default template is loaded automatically if this game starts and all options and textures are send to the game.