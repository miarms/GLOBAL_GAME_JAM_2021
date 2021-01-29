#include "../../inc/my.h"

void intro(t_window s_window)
{
    t_intro s_intro = init_intro(s_intro, s_window);

    while (sfRenderWindow_isOpen(s_intro.window)) {
        //s_game = get_mouse_map(s_game); 
        s_intro = init_clock_intro(s_intro);
        sfRenderWindow_display(s_intro.window);
        draw_sprite_intro(s_intro);
        while (sfRenderWindow_pollEvent(s_intro.window, &s_intro.event)) {
            close_window(s_intro.window, s_intro.event);
        }
        //s_game = mouse_map(s_game);
        s_intro = move_rect_intro(s_intro);
    }
}