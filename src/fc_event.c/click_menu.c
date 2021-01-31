/*
** EPITECH PROJECT, 2021
**
** File description:
** main.c
*/

#include "../../inc/my.h"

t_window click_menu_play(t_window s_window)
{
    if ((s_window.posmouse.x >= s_window.posplay.x) && (s_window.posmouse.x <= s_window.posplay.x + 300) && \
    (s_window.posmouse.y >= s_window.posplay.y) && (s_window.posmouse.y <= s_window.posplay.y + 90)) { 
        s_window.rect_play.top = 82;
    } else
        s_window.rect_play.top = 0;
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (s_window.posmouse.x >= s_window.posplay.x && s_window.posmouse.x <= s_window.posplay.x + 300 \
            && s_window.posmouse.y >= s_window.posplay.y && s_window.posmouse.y <= s_window.posplay.y + 90) {
            sfMusic_destroy(s_window.music_menu);
            intro(s_window);
        }
    }
    return (s_window);
}

t_window click_menu_quit(t_window s_window)
{
    if (s_window.posmouse.x >= s_window.posquit.x && s_window.posmouse.x <= s_window.posquit.x + 300 \
                && s_window.posmouse.y >= s_window.posquit.y && s_window.posmouse.y <= s_window.posquit.y + 90) {
                s_window.rect_quit.top = 82;
    } else
        s_window.rect_quit.top = 0;
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (s_window.posmouse.x >= s_window.posquit.x && s_window.posmouse.x <= s_window.posquit.x + 300 \
        && s_window.posmouse.y >= s_window.posquit.y && s_window.posmouse.y <= s_window.posquit.y + 95) {
            sfRenderWindow_close(s_window.window);
        }
    }
    return (s_window);
}

t_window click_menu_htp(t_window s_window)
{
    if (s_window.posmouse.x >= s_window.poshtp.x && s_window.posmouse.x <= s_window.poshtp.x + 300 \
                && s_window.posmouse.y >= s_window.poshtp.y && s_window.posmouse.y <= s_window.poshtp.y + 90) {
                s_window.rect_htp.top = 82;
    } else
        s_window.rect_htp.top = 0;
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (s_window.see_htp == 1){
            s_window.see_htp = 0;
            usleep(200000);
        }
        if (s_window.posmouse.x >= s_window.poshtp.x && s_window.posmouse.x <= s_window.poshtp.x + 300 \
        && s_window.posmouse.y >= s_window.poshtp.y && s_window.posmouse.y <= s_window.poshtp.y + 90) {
            s_window.see_htp = 1;
            usleep(200000);
        }
        
    }
    return (s_window);
}