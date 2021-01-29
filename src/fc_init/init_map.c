/*
** EPITECH PROJECT, 2021
** GLOBAS_GAME_JAM_2021
** File description:
** init_map
*/

#include "../../inc/my.h"

t_window init_sprite_map(t_window s_window)
{   
    s_window.s_sol = sfSprite_create();
    return (s_window);
}

t_window init_texture_map(t_window s_window)
{
    s_window.t_sol = sfTexture_createFromFile("ressources/img/map/sol.png", NULL);
    sfSprite_setTexture(s_window.s_sol, s_window.t_sol, sfTrue);
    return (s_window);
}

t_window init_pos_map(t_window s_window)
{
    s_window.pos_sol = fc_pos(0,0);
    return (s_window);
}

void draw_sprite_map(t_window s_window)
{
    sfRenderWindow_drawSprite(s_window.window, s_window.s_sol, NULL);
}

t_window init_map(t_window s_window)
{
    s_window = init_sprite_map(s_window);
    s_window = init_texture_map(s_window);
    s_window = init_pos_map(s_window);
    return (s_window);
}