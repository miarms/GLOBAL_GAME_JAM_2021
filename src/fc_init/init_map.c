/*
** EPITECH PROJECT, 2021
** GLOBAS_GAME_JAM_2021
** File description:
** init_map
*/

#include "../../inc/my.h"

t_game init_sprite_map(t_game s_game)
{   
    s_game.s_sol = sfSprite_create();
    s_game.s_batiment = sfSprite_create();
    s_game.s_ciel = sfSprite_create();

    return (s_game);
}

t_game init_texture_map(t_game s_game)
{
    s_game.t_sol = sfTexture_createFromFile("ressources/img/map/sol.png", NULL);
    sfSprite_setTexture(s_game.s_sol, s_game.t_sol, sfTrue);

    s_game.t_batiment = sfTexture_createFromFile("ressources/img/map/batiment.png", NULL);
    sfSprite_setTexture(s_game.s_batiment, s_game.t_batiment, sfTrue);

    s_game.t_ciel = sfTexture_createFromFile("ressources/img/map/ciel.png", NULL);
    sfSprite_setTexture(s_game.s_ciel, s_game.t_ciel, sfTrue);

    return (s_game);
}

void draw_sprite_map(t_game s_game)
{
    sfRenderWindow_drawSprite(s_game.window, s_game.s_ciel, NULL);
    sfRenderWindow_drawSprite(s_game.window, s_game.s_batiment, NULL);
    sfRenderWindow_drawSprite(s_game.window, s_game.s_sol, NULL);
}

t_game init_pos_map(t_game s_game)
{
    s_game.pos_sol = fc_pos(0,0);
    sfSprite_setPosition(s_game.s_sol, s_game.pos_sol);

    s_game.pos_batiment = fc_pos(0,0);
    sfSprite_setPosition(s_game.s_batiment, s_game.pos_batiment);

    s_game.pos_ciel = fc_pos(0,0);
    sfSprite_setPosition(s_game.s_ciel, s_game.pos_ciel);

    return (s_game);
}

/*t_game init_rect_map(t_game s_game)
{   
    s_game.rect_perso = fc_rect(0,0,97,132);
    s_game.rect_mission1 = fc_rect(0,0,125,200);
    s_game.rect_warning = fc_rect(0,0,22,43);
    return (s_game);
}*/


t_game init_map(t_game s_game, t_window s_window)
{
    s_game.window = s_window.window;
    s_game.posmouse = s_window.posmouse;
    s_game.event = s_window.event;
    s_game = init_sprite_map(s_game);
    s_game = init_texture_map(s_game);
    s_game = init_pos_map(s_game);
    //s_game = init_rect_map(s_game);

    
    return (s_game);
}