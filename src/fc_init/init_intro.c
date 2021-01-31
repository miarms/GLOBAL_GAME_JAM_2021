/*
** EPITECH PROJECT, 2021
** GLOBAS_GAME_JAM_2021
** File description:
** init_map
*/

#include "../../inc/my.h"

t_intro init_sprite_intro(t_intro s_intro)
{   
    s_intro.sintro = sfSprite_create();
    s_intro.sskip = sfSprite_create();
    return (s_intro);
}

t_intro init_texture_intro(t_intro s_intro)
{
    s_intro.tintro = sfTexture_createFromFile("ressources/img/menu/intro.png", NULL);
    sfSprite_setTexture(s_intro.sintro, s_intro.tintro, sfTrue);
    s_intro.tskip = sfTexture_createFromFile("ressources/img/menu/skip.png", NULL);
    sfSprite_setTexture(s_intro.sskip, s_intro.tskip, sfTrue);
    return (s_intro);
}

t_intro init_pos_intro(t_intro s_intro)
{
    s_intro.posintro = fc_pos(400,200);
    sfSprite_setPosition(s_intro.sintro, s_intro.posintro);
    s_intro.posskip = fc_pos(1045,628);
    sfSprite_setPosition(s_intro.sskip, s_intro.posskip);
    return (s_intro);
}


void draw_sprite_intro(t_intro s_intro)
{
    sfRenderWindow_clear(s_intro.window, sfBlack);
    sfRenderWindow_drawSprite(s_intro.window, s_intro.sintro, NULL);
    sfRenderWindow_drawSprite(s_intro.window, s_intro.sskip, NULL);
}

t_intro init_intro(t_intro s_intro, t_window s_window)
{
    s_intro.window = s_window.window;
    s_intro.posmouse = s_window.posmouse;
    s_intro.event = s_window.event;
    s_intro.music_intro = sfMusic_createFromFile("ressources/sound/intro.ogg");
    sfMusic_play(s_intro.music_intro);
    s_intro = init_sprite_intro(s_intro);
    s_intro = init_texture_intro(s_intro);
    s_intro = init_pos_intro(s_intro);
    s_intro.rect_intro = fc_rect(0,0,745,418);
    s_intro.rect_skip = fc_rect(0,0, 100, 35);
    s_intro = init_rect_intro(s_intro);
    s_intro.timer_intro = sfClock_create();

    return (s_intro);
}