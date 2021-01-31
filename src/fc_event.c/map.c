/*
** EPITECH PROJECT, 2021
** GLOBAS_GAME_JAM_2021
** File description:
** map
*/

#include "../../inc/my.h"

t_game end_compare(t_game s_game)
{
    if (s_game.happy_moment > s_game.sad_moment)
        sfRenderWindow_drawSprite(s_game.window, s_game.s_end_happy, NULL);
    if (s_game.happy_moment < s_game.sad_moment)
        sfRenderWindow_drawSprite(s_game.window, s_game.s_end_sad, NULL);
    if (s_game.sad_moment == s_game.happy_moment)
        sfRenderWindow_drawSprite(s_game.window, s_game.s_end_egal, NULL);
    if (s_game.sad_moment == 0 && s_game.happy_moment == 0) {
        sfRenderWindow_drawSprite(s_game.window, s_game.s_end_none, NULL);
    }
    return (s_game);
}

t_game move_background(t_game s_game)
{
    if (s_game.check_pause == 0) {
        s_game.pos_batiment.x = s_game.pos_batiment.x - 0.1;
        sfSprite_setPosition(s_game.s_batiment, s_game.pos_batiment);
        s_game.pos_sol.x = s_game.pos_sol.x - 1;
        sfSprite_setPosition(s_game.s_sol, s_game.pos_sol);
        if (s_game.pos_sol.x < -1600) {
            sfRenderWindow_clear(s_game.window, sfBlack);
            end_compare(s_game);
        }
    }
    return (s_game);
}

t_game move_memory(t_game s_game)
{   
    int i = 0;
    while (i < 5) {
        sfSprite_setPosition(s_game.shappy, s_game.poshappy);
        i++;
    }
     s_game.poshappy.x = s_game.poshappy.x - 4;
    if (s_game.poshappy.x < -1600) {
        s_game.poshappy.x = 1600;
    }
    sfSprite_setPosition(s_game.ssad, s_game.possad);
    s_game.possad.x = s_game.possad.x - 3;
    if (s_game.possad.x < -1600) {
        s_game.possad.x = 1600;
    }
    return (s_game);
}

void map(t_window s_window)
{
    t_game s_game = init_map(s_game, s_window);
    t_memory s_memory = init_memory(s_memory, s_window);
    
    s_game.count_moment_happy = 0;
    s_game.happy_moment = 0;
    s_game.sad_moment = 0;
    while (sfRenderWindow_isOpen(s_game.window)) {
        s_game = get_mouse_map(s_game); 
        //s_game = init_clock_map(s_game);
        s_game = init_clock_perso(s_game);
        sfRenderWindow_display(s_game.window);
        s_game = event_perso(s_game, s_memory);
        draw_sprite_map(s_game);
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            s_game.check_pause = 1;
        s_game = click_pause(s_game);
        while (sfRenderWindow_pollEvent(s_game.window, &s_game.event)) {
            close_window(s_game.window, s_game.event);
        }
        s_game = move_rect_map(s_game);
        s_game = move_memory(s_game);
        draw_sprite_memory(s_memory);
        s_memory = move_memory_others(s_memory);
        s_game = move_background(s_game);
    }
}