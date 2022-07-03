//
// Created by Josue Figueroa on 7/2/22.
//

#include "ui.h"
#include <menu.h>
#include <menuIO/liquidCrystalOut.h>
#include <menuIO/chainStream.h>

#define MAX_DEPTH 3


chainStream<0> in(nullptr);

LiquidCrystal lcd(8,9,4,5,6,7);

TOGGLE(currentMode, toggleCurrentMode, "Mode: ", doExit, enterEvent, noStyle
       ,VALUE("Shuffle", 0, noEvent, noEvent)
       ,VALUE("White Mode", 1, noEvent, noEvent)
       ,VALUE("Off", 2, noEvent, noEvent)
       )

MENU(mainMenu, "HOME", doNothing, noEvent, wrapStyle
     ,SUBMENU(toggleCurrentMode)
     )

MENU_OUTPUTS(out, MAX_DEPTH, LIQUIDCRYSTAL_OUT(lcd, {0,0,16,2}), NONE)
NAVROOT(nav, mainMenu, MAX_DEPTH, in, out)