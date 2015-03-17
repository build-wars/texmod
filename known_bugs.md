

# Known bugs #

This is a list of know bugs, which are not solved. Each chapter is organized as follow:
  1. short introduction with list of games, which are known to me and are affected by the bug
  1. short description, how you recognize the bug
  1. _technical explanation about the bug_
  1. When will the bug be solved and are there currently ways around this bug.



## Injection method 1 ##
The injection via the hook might not work on Win XP for
  * Guild Wars
  * Hotel

The game starts, the tab in uMod opens, but you cannot modify the game in any way.

_uMod needs the dll to be injected before the game calls the Direct3DCreate9() function. Somehow on Win XP for some game, the hook is installed to late, thus the game has already called Direct3DCreate9() and uMod recognize the game (the tab opens), but cannot modify it._

This bug cannot be solved, but in the next version of uMod you will see a hint if the injection was early enough.

## Less textures ##
In "save single texture" mode not all texture are selectable. Not all texture are modified within a TexMod `*.tpf` mod, or even the mod does not work at all.
  * Mass Effect 2
  * Fifa 12

...

_uMod calculate the hash, after it is created. Somehow the hash cannot be calculated for all texture, since uMod can't lock the texture data for these textures. Maybe the game holds still the lock on the texture data, thus uMod can't get it._

If I guess right and the bug is caused by the lock, the bug will be solved soon.

## Save single textures ##
In previous version (older than [r35](https://code.google.com/p/texmod/source/detail?r=35)) in the "save single texture" mode the red text was written also on textures, which were rendered by the game (e.g. The Movie). This bug was solved in version [r35](https://code.google.com/p/texmod/source/detail?r=35), but this disabled the modding at all for some other games. In the current version [r40](https://code.google.com/p/texmod/source/detail?r=40) the main problem is solved. But you cannot see the red text. Games which are influenced:
  * Hotel

You can select and save textures in the "save single texture" mode, but you won't see the red text.

_uMod only draw the red text, if the device is drawing into a back buffer. Somehow some games does not render to a back buffer and therefore uMod does not draw the red text._

This bug is not urgent, since you can use an older version if you really like to see the red text while saving textures.