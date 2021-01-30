/*
** EPITECH PROJECT, 2021
** 
** File description:
** rect.c
*/

#include "../../inc/my.h"

t_intro init_rect_intro(t_intro s_intro)
{   
    if (s_intro.secgame_intro > 0 && s_intro.secgame_intro < 2)
        s_intro.rect_intro.left = 0;
    if (s_intro.secgame_intro > 2 && s_intro.secgame_intro < 4)
        s_intro.rect_intro.left = 744;
    if (s_intro.secgame_intro > 4 && s_intro.secgame_intro < 6)
        s_intro.rect_intro.left = 1489;
    if (s_intro.secgame_intro > 6 && s_intro.secgame_intro < 8)
        s_intro.rect_intro.left = 2233;
    if (s_intro.secgame_intro > 8 && s_intro.secgame_intro < 10)
        s_intro.rect_intro.left = 2978;
    if (s_intro.secgame_intro > 10 && s_intro.secgame_intro < 12)
        s_intro.rect_intro.left = 3723;
    if (s_intro.secgame_intro > 12 && s_intro.secgame_intro < 14)
        s_intro.rect_intro.left = 4468;
    if (s_intro.secgame_intro > 14 && s_intro.secgame_intro < 16)
        s_intro.rect_intro.left = 5212;
    if (s_intro.secgame_intro > 16 && s_intro.secgame_intro < 18)
        s_intro.rect_intro.left = 5957;
    if (s_intro.secgame_intro > 18 && s_intro.secgame_intro < 20)
        s_intro.rect_intro.left = 6702;
    if (s_intro.secgame_intro > 20 && s_intro.secgame_intro < 22)
        s_intro.rect_intro.left = 7447;
    if (s_intro.secgame_intro > 22) {
        
        sfClock_restart(s_intro.timer_intro);
    }
    return (s_intro);
}

t_intro move_rect_intro(t_intro s_intro)
{
    sfSprite_setTextureRect(s_intro.sintro, s_intro.rect_intro);    
    sfSprite_setTextureRect(s_intro.sskip, s_intro.rect_skip);
    s_intro = init_rect_intro(s_intro);
    
    return (s_intro);
}

t_window move_rect_all(t_window s_window)
{   
    sfSprite_setTextureRect(s_window.splay, s_window.rect_play);
    sfSprite_setTextureRect(s_window.squit, s_window.rect_quit);
    sfSprite_setTextureRect(s_window.shtp, s_window.rect_htp);
    return (s_window);
}

t_game move_rect_map(t_game s_game)
{
    if (s_game.check_pause == 1) {
        sfSprite_setTextureRect(s_game.s_pause_play, s_game.rect_pause_play);
        sfSprite_setTextureRect(s_game.s_pause_quit, s_game.rect_pause_quit);
        sfSprite_setTextureRect(s_game.s_pause_replay, s_game.rect_pause_replay);
    }

    return (s_game);
}