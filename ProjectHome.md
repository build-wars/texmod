
# `TexMod` #
TexMod was originally created by _RS_ as a modding utility for _“Tomb Raider 7: Legend”_ back in 2006. It allows to extract textures from DirectX 9 applications, and to pack eventually changed textures into `TPF` files (_TexMod Package File_) to load those back to the application replacing the original textures. This allowed players to change the appearance of Lara Croft and other characters of the game. TexMod and a lot customizations are still available at [Tomb Raider HUB](http://tombraiderhub.com/tr7/modding/).

Years later, players of [Guild Wars](http://guildwars.com) discovered TexMod and its great functionality, and so they started to make their own customizations for Guild Wars. Being to only real way to change a player's interface, plus the fact that it was being allowed by the developer ArenaNet, it got very popular. Now when searching for TexMod on google, the first result is linking to an article about it on [the official Guild Wars Wiki](http://wiki.guildwars.com/wiki/Guide_to_modifying_in-game_graphics).

However as great as the original TexMod is, its development stopped with the actual release of it, so this project is an approach to create an open source port of TexMod while integrating new features and hopefully a great future compilance (regarding DirectX 10 and 11).


# Universal Modding Engine (uMod) #

[Wiki in Englisch](uMod.md) ; [Wiki in Deutsch](http://code.google.com/p/texmod/wiki/uMod_German)


We decided to rename the project (earlier **OpenTexMod**).

Features:
  1. modify the game while it is running (activating and deactivating a mod)
  1. support the original TexMod (`*.tpf`) Mods
  1. save textures from the game
  1. create templates for a easy game start (no need to select all the mods again and again)

Features of uMod 2:
  1. mod creator: arrange your texture into groups to extend the usability of your mods
  1. mod user: activate or deactivate single textures inside a mod and if present also groups and subgroups
  1. size and format filters if you let uMod save all texture

You can [download](http://code.google.com/p/texmod/downloads/list) **uMod V1.0** and **uMod V2.0 Alpha**. I decided to redesign uMod instead of coding the DirectX 10 support, because uMod already works with GW2 ;)

There is also a **[list of known bugs](known_bugs.md)**. If you find a new bug or have more information about a known bug, please submit or extend an [Issue](http://code.google.com/p/texmod/issues/list).

# Become a member of this project #

I need co-workers. Do YOU want to join this project?

requirements:
  * English or German
  * some basic experience in C++
  * skype or TeamSpeak

what know-how is useful, but definitely not required!
  * DirectX 8-11
  * dll-injection
  * GUI programming

what can be done or add in future:
  * improvement of the code ;)
  * support of DirectX 8, 10, and 11
  * OnScreenDisplay (configure uMod without minimizing the game)
  * modding of meshes
  * managing templates without a running game in the background
  * starting the game through uMod with a certain template -> shortcuts
  * a MapEditor for generating Mods for a game map automatically (e.g. quest/mission marks in a RPG, or tactical points for PVP teams), but this should be outsourced to a new project

Ho to contact me: Go to my [google code profile](http://code.google.com/u/117500613801815657675/) and click on the dots in the user name (Username: c...@koerner-de.net).