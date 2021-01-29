/*
** EPITECH PROJECT, 2021
** GLOBAS_GAME_JAM_2021
** File description:
** map
*/

#include "../../inc/my.h"

void map(t_window s_window)
{
    t_game s_game = init_map(s_game, s_window);

    while (sfRenderWindow_isOpen(s_game.window)) {
        //s_game = get_mouse_map(s_game); 
        //s_game = init_clock_map(s_game);
        sfRenderWindow_display(s_game.window);
        draw_sprite_map(s_game);
        while (sfRenderWindow_pollEvent(s_game.window, &s_game.event)) {
            close_window(s_game.window, s_game.event);
        }
        //s_game = mouse_map(s_game);
        //s_game = move_rect_map(s_game);
    }
}