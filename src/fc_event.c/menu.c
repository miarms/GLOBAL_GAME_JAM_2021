
#include "../../inc/my.h"

void menu()
{   
    t_window s_window = init_menu(s_window);
    s_window = init_map(s_window);
    
    while (sfRenderWindow_isOpen(s_window.window)) {
        s_window = get_mouse(s_window);
        //s_window = init_clock(s_window);
        sfRenderWindow_display(s_window.window);
        draw_sprite_menu(s_window);
        s_window = click_menu_play(s_window);
        //s_window = click_menu_quit(s_window);
        while (sfRenderWindow_pollEvent(s_window.window, & s_window.event)) {
            close_window(s_window.window, s_window.event);
        }
        s_window = move_rect_all(s_window);
    }
}