#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Graphics/Color.h>
#include <SFML/System.h>
#include <SFML/Window/Mouse.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/System.h>
#include <SFML/System/Clock.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>
#include <SFML/Graphics/Font.h>
#include <SFML/Graphics/Text.h>
#include <string.h>

#ifndef MY_H_
#define MY_H_

typedef struct s_window {

    sfRenderWindow *window;
    sfVector2f posmouse;
    sfEvent event;
    sfSprite *slogo;
    sfTexture *tlogo;
    sfVector2f poslogo;
    sfSprite *smenu;
    sfTexture *tmenu;
    sfVector2f posmenu;
    sfSprite *splay;
    sfTexture *tplay;
    sfVector2f posplay;
    sfIntRect rect_play;
    sfSprite *squit;
    sfTexture *tquit;
    sfVector2f posquit;
    sfIntRect rect_quit;

    sfSprite *shtp;
    sfTexture *thtp;
    sfVector2f poshtp;
    sfIntRect rect_htp;
} t_window;

sfIntRect fc_rect(int top, int left, int width, int height);
sfVector2f fc_pos(int x, int y);
t_window get_mouse(t_window s_window);
void close_window(sfRenderWindow *window, sfEvent event);
t_window init_clock(t_window s_window);
t_window move_rect_all(t_window s_window);

/*MENU*/
t_window init_sprite_menu(t_window s_window);
t_window init_texture_menu(t_window s_window);
t_window init_pos_menu(t_window s_window);
t_window init_menu(t_window s_window);
void draw_sprite_menu(t_window s_window);
t_window click_menu_play(t_window s_window);
t_window click_menu_quit(t_window s_window);
void menu();
#endif