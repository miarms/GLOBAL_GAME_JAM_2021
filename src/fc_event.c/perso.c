
#include "../../inc/my.h"

t_game jump_perso(t_game s_game)
{
    if ((sfKeyboard_isKeyPressed(sfKeySpace)) && (s_game.ct_jump == 1)) {
        sfClock_restart(s_game.clock_jump);
        s_game.ct_jump = 0;
        s_game.posperso.y = 615;
        sfSprite_setPosition(s_game.sperso, s_game.posperso);
    }
    if (s_game.second_jump > 0 && s_game.second_jump < 2) {
        s_game.posperso.y = 615;
        sfSprite_setPosition(s_game.sperso, s_game.posperso);
    }

    if ((s_game.second_jump > 2 && s_game.second_jump < 4) && s_game.posperso.y == 615) {
        s_game.posperso.y = 700; 
        sfSprite_setPosition(s_game.sperso, s_game.posperso);
        s_game.ct_jump = 1;
    }
    return (s_game);
}
