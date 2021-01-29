

#include "../../inc/my.h"

t_intro init_clock_intro(t_intro s_intro)
{
    s_intro.timergame_intro = sfClock_getElapsedTime(s_intro.timer_intro);
    s_intro.secgame_intro = s_intro.timergame_intro.microseconds / 100000.0;
    return (s_intro);
}