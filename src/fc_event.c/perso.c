
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

t_game collision_memory(t_game s_game)
{
    if ((s_game.posperso.x + 40 >= s_game.poshappy.x && s_game.posperso.x <= s_game.poshappy.x + 50) && \
    (s_game.posperso.y >= s_game.poshappy.y && s_game.posperso.y <= s_game.poshappy.y + 30)) {
        s_game.check_halo = 1;
    } else if ((s_game.posperso.x + 40 >= s_game.possad.x - 30 && s_game.posperso.x <= s_game.possad.x + 10) && \
    (s_game.posperso.y >= s_game.possad.y && s_game.posperso.y <= s_game.possad.y + 30)) {
        s_game.check_halo = -1;
    }
    return (s_game);
}

t_game event_perso(t_game s_game)
{
    s_game = jump_perso(s_game);
    s_game = collision_memory(s_game);

    return (s_game);
}
