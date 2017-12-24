//Common file for includes

#include "libinclude.h"

#include "misc.h"

#include "GameScreen.h"

#ifdef WIN32
#include "GameScreenWin.cpp"
#elif
#include "GameScreenLinux.cpp"
#endif

#include "player.h"
#include "player.cpp"
#include "level.h"
#include "level.cpp"
#include "GameSystem.h"
#include "GameSystem.cpp"
