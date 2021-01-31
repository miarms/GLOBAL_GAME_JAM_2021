
#include "../../inc/my.h"

t_game jump_perso(t_game s_game)
{
    if ((sfKeyboard_isKeyPressed(sfKeySpace)) && (s_game.ct_jump == 1)) {
        sfClock_restart(s_game.clock_jump);
        s_game.ct_jump = 0;
        s_game.posperso.y = 615;
        sfSprite_setPosition(s_game.sperso, s_game.posperso);
        s_game.pos_halo_blue = fc_pos(s_game.posperso.x, s_game.posperso.y);
        sfSprite_setPosition(s_game.s_halo_blue, s_game.pos_halo_blue);
        s_game.pos_halo_orange = fc_pos(s_game.posperso.x, s_game.posperso.y);
        sfSprite_setPosition(s_game.s_halo_orange, s_game.pos_halo_orange);
    }
    if (s_game.second_jump > 0 && s_game.second_jump < 2) {
        s_game.posperso.y = 615;
        sfSprite_setPosition(s_game.sperso, s_game.posperso);
        s_game.pos_halo_blue = fc_pos(s_game.posperso.x, s_game.posperso.y);
        sfSprite_setPosition(s_game.s_halo_blue, s_game.pos_halo_blue);
        s_game.pos_halo_orange = fc_pos(s_game.posperso.x, s_game.posperso.y);
        sfSprite_setPosition(s_game.s_halo_orange, s_game.pos_halo_orange);
    }

    if ((s_game.second_jump > 2 && s_game.second_jump < 3) && s_game.posperso.y == 615) {
        s_game.posperso.y = 700; 
        sfSprite_setPosition(s_game.sperso, s_game.posperso);
        s_game.pos_halo_blue = fc_pos(s_game.posperso.x, s_game.posperso.y);
        sfSprite_setPosition(s_game.s_halo_blue, s_game.pos_halo_blue);
        s_game.pos_halo_orange = fc_pos(s_game.posperso.x, s_game.posperso.y);
        sfSprite_setPosition(s_game.s_halo_orange, s_game.pos_halo_orange);
        s_game.ct_jump = 1;
    }
    return (s_game);
}

t_game collision_memory(t_game s_game, t_memory s_memory)
{   
    if ((s_game.posperso.x + 40 >= s_game.poshappy.x && s_game.posperso.x <= s_game.poshappy.x + 50) && \
    (s_game.posperso.y >= s_game.poshappy.y && s_game.posperso.y <= s_game.poshappy.y + 30)) {
        s_game.check_halo = 1;
        s_game.count_moment_happy = 1;
    } else if ((s_game.posperso.x + 40 >= s_game.possad.x - 30 && s_game.posperso.x <= s_game.possad.x + 10) && \
    (s_game.posperso.y >= s_game.possad.y && s_game.posperso.y <= s_game.possad.y + 30)) {
        s_game.check_halo = -1;
        s_game.count_moment_sad = 1;
    } 

    if ((s_game.posperso.x + 40 >= s_memory.poshappy1.x && s_game.posperso.x <= s_memory.poshappy1.x + 50) && \
    (s_game.posperso.y >= s_memory.poshappy1.y && s_game.posperso.y <= s_memory.poshappy1.y + 30)) {
        s_game.check_halo = 1;
        s_game.count_moment_happy = 1;
    } else if ((s_game.posperso.x + 40 >= s_memory.possad1.x - 30 && s_game.posperso.x <= s_memory.possad1.x + 10) && \
    (s_game.posperso.y >= s_memory.possad1.y && s_game.posperso.y <= s_memory.possad1.y + 30)) {
        s_game.check_halo = -1;
        s_game.count_moment_sad = 1;
    }
    //HAPPY 1 & SAD 1
    if ((s_game.posperso.x + 40 >= s_memory.poshappy1.x && s_game.posperso.x <= s_memory.poshappy1.x + 50) && \
    (s_game.posperso.y >= s_memory.poshappy1.y && s_game.posperso.y <= s_memory.poshappy1.y + 30)) {
        s_game.check_halo = 1;
        s_game.count_moment_happy = 1;
    } else if ((s_game.posperso.x + 40 >= s_memory.possad1.x - 30 && s_game.posperso.x <= s_memory.possad1.x + 10) && \
    (s_game.posperso.y >= s_memory.possad1.y && s_game.posperso.y <= s_memory.possad1.y + 30)) {
        s_game.check_halo = -1;
        s_game.count_moment_sad = 1;
    }

    //HAPPY 2 & SAD2
    if ((s_game.posperso.x + 40 >= s_memory.poshappy1.x && s_game.posperso.x <= s_memory.poshappy1.x + 50) && \
    (s_game.posperso.y >= s_memory.poshappy1.y && s_game.posperso.y <= s_memory.poshappy1.y + 30)) {
        s_game.check_halo = 1;
        s_game.count_moment_happy = 1;
    } else if ((s_game.posperso.x + 40 >= s_memory.possad1.x - 30 && s_game.posperso.x <= s_memory.possad1.x + 10) && \
    (s_game.posperso.y >= s_memory.possad1.y && s_game.posperso.y <= s_memory.possad1.y + 30)) {
        s_game.check_halo = -1;
        s_game.count_moment_sad = 1;
    }
    return (s_game);
}

t_game event_perso(t_game s_game, t_memory s_memory)
{
    s_game = jump_perso(s_game);
    s_game = collision_memory(s_game, s_memory);
    if (s_game.count_moment_happy == 1) {
        s_game.happy_moment = s_game.happy_moment + 1;
        usleep(55000);
        s_game.count_moment_happy = 0;
    }
    if (s_game.count_moment_sad == 1) {
        s_game.sad_moment = s_game.sad_moment + 1;
        usleep(50000);
        s_game.count_moment_sad = 0;
    }
    return (s_game);
}
