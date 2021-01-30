#include "../../inc/my.h"

t_intro click_skip(t_intro s_intro, t_window s_window)
{
    if ((s_intro.posmouse.x >= s_intro.posskip.x) && (s_intro.posmouse.x <= s_intro.posskip.x + 100) && \
    (s_intro.posmouse.y >= s_intro.posskip.y) && (s_intro.posmouse.y <= s_intro.posskip.y + 35)) { 
        s_intro.rect_skip.top = 43;
    } else
        s_intro.rect_skip.top = 0;
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (s_intro.posmouse.x >= s_intro.posskip.x && s_intro.posmouse.x <= s_intro.posskip.x + 100 \
            && s_intro.posmouse.y >= s_intro.posskip.y && s_intro.posmouse.y <= s_intro.posskip.y + 35) {
            map(s_window);
        }
    }
    return (s_intro);
}

void intro(t_window s_window)
{
    t_intro s_intro = init_intro(s_intro, s_window);
    t_game s_game = init_map(s_game, s_window);

    while (sfRenderWindow_isOpen(s_intro.window)) {
        s_intro = get_mouse_intro(s_intro); 
        s_intro = init_clock_intro(s_intro);
        sfRenderWindow_display(s_intro.window); 
        draw_sprite_intro(s_intro);
        while (sfRenderWindow_pollEvent(s_intro.window, &s_intro.event)) {
            close_window(s_intro.window, s_intro.event);
        }
        //s_game = mouse_map(s_game);
        s_intro = move_rect_intro(s_intro);
        s_intro = click_skip(s_intro, s_window);
    }
}

