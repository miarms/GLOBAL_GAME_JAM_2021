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
    return (s_intro);
}

t_intro init_texture_intro(t_intro s_intro)
{
    s_intro.tintro = sfTexture_createFromFile("ressources/img/menu/intro.png", NULL);
    sfSprite_setTexture(s_intro.sintro, s_intro.tintro, sfTrue);
    return (s_intro);
}

t_intro init_pos_intro(t_intro s_intro)
{
    s_intro.posintro = fc_pos(400,200);
    sfSprite_setPosition(s_intro.sintro, s_intro.posintro);
    return (s_intro);
}


void draw_sprite_intro(t_intro s_intro)
{
    sfRenderWindow_clear(s_intro.window, sfBlack);
    sfRenderWindow_drawSprite(s_intro.window, s_intro.sintro, NULL);
}

t_intro init_intro(t_intro s_intro, t_window s_window)
{
    s_intro.window = s_window.window;
    s_intro.posmouse = s_window.posmouse;
    s_intro.event = s_window.event;
    s_intro = init_sprite_intro(s_intro);
    s_intro = init_texture_intro(s_intro);
    s_intro = init_pos_intro(s_intro);
    s_intro.rect_intro = fc_rect(0,0,745,418);
    s_intro = init_rect_intro(s_intro);
    s_intro.timer_intro = sfClock_create();

    return (s_intro);
}