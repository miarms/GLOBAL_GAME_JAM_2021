

#include "../../inc/my.h"

t_intro init_clock_intro(t_intro s_intro)
{
    s_intro.timergame_intro = sfClock_getElapsedTime(s_intro.timer_intro);
    s_intro.secgame_intro = s_intro.timergame_intro.microseconds / 100000.0;
    return (s_intro);
}

t_game init_clock_perso(t_game s_game)
{
    s_game.timergame_perso = sfClock_getElapsedTime(s_game.timer_perso);
    s_game.secgame_perso = s_game.timergame_perso.microseconds / 100000.0;
    //JUMP
    s_game.time_jump = sfClock_getElapsedTime(s_game.clock_jump);
    s_game.second_jump = s_game.time_jump.microseconds / 100000.0;
    return (s_game);
}