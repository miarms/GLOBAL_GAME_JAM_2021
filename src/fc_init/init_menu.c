
#include "../../inc/my.h"

t_window init_sprite_menu(t_window s_window)
{   
    s_window.smenu = sfSprite_create();
    s_window.slogo = sfSprite_create();
    s_window.splay = sfSprite_create();
    s_window.squit = sfSprite_create();
    s_window.shtp = sfSprite_create();
    return (s_window);
}

t_window init_texture_menu(t_window s_window)
{   
    s_window.tmenu = sfTexture_createFromFile("ressources/img/menu/background-menu.jpg", NULL);
    sfSprite_setTexture(s_window.smenu, s_window.tmenu, sfTrue);
    s_window.tlogo = sfTexture_createFromFile("ressources/img/menu/titre.png", NULL);
    sfSprite_setTexture(s_window.slogo, s_window.tlogo, sfTrue);
    s_window.tplay = sfTexture_createFromFile("ressources/img/menu/play.png", NULL);
    sfSprite_setTexture(s_window.splay, s_window.tplay, sfTrue);
    s_window.tquit = sfTexture_createFromFile("ressources/img/menu/quit.png", NULL);
    sfSprite_setTexture(s_window.squit, s_window.tquit, sfTrue);
    s_window.thtp = sfTexture_createFromFile("ressources/img/menu/htp.png", NULL);
    sfSprite_setTexture(s_window.shtp, s_window.thtp, sfTrue);
    return (s_window);
}

t_window init_pos_menu(t_window s_window)
{   
    s_window.posmenu = fc_pos(0,0);
    sfSprite_setPosition(s_window.smenu, s_window.posmenu);
    s_window.poslogo = fc_pos(400, 250);
    sfSprite_setPosition(s_window.slogo, s_window.poslogo);
    s_window.posplay = fc_pos(650,450);
    sfSprite_setPosition(s_window.splay, s_window.posplay);
    s_window.posquit = fc_pos(1000,550);
    sfSprite_setPosition(s_window.squit, s_window.posquit);
    s_window.poshtp = fc_pos(250,550);
    sfSprite_setPosition(s_window.shtp, s_window.poshtp);
    return (s_window);
}

void draw_sprite_menu(t_window s_window)
{   
    sfRenderWindow_clear(s_window.window, sfBlack);
    sfRenderWindow_drawSprite(s_window.window, s_window.smenu, NULL);
    sfRenderWindow_drawSprite(s_window.window, s_window.slogo, NULL);
    sfRenderWindow_drawSprite(s_window.window, s_window.splay, NULL);
    sfRenderWindow_drawSprite(s_window.window, s_window.squit, NULL);
    sfRenderWindow_drawSprite(s_window.window, s_window.shtp, NULL);
}

t_window init_menu(t_window s_window)
{
    sfVideoMode mode = {1600, 900, 32};
    s_window.window = sfRenderWindow_create(mode, "Lost&Found",\
    sfClose | sfResize, NULL);
    s_window = init_sprite_menu(s_window);
    s_window = init_texture_menu(s_window);
    s_window = init_pos_menu(s_window);
    s_window.rect_play = fc_rect(0, 0, 300, 80);
    sfSprite_setTextureRect(s_window.splay, s_window.rect_play);
    s_window.rect_quit = fc_rect(0, 0, 300, 80);
    sfSprite_setTextureRect(s_window.squit, s_window.rect_quit);
    s_window.rect_htp = fc_rect(0, 0, 300, 80);
    sfSprite_setTextureRect(s_window.shtp, s_window.rect_htp);
    return (s_window);
}