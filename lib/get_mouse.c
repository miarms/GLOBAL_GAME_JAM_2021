/*
** EPITECH PROJECT, 2020
** m
** File description:
** m
*/

#include "../inc/my.h"

t_window get_mouse(t_window s_window)
{
    s_window.posmouse.x = sfMouse_getPositionRenderWindow(s_window.window).x;
    s_window.posmouse.y = sfMouse_getPositionRenderWindow(s_window.window).y;
    return (s_window);
}

t_intro get_mouse_intro(t_intro s_intro)
{
    s_intro.posmouse.x = sfMouse_getPositionRenderWindow(s_intro.window).x;
    s_intro.posmouse.y = sfMouse_getPositionRenderWindow(s_intro.window).y;
    return (s_intro);
}
/*
t_map2 get_mouse_map2(t_map2 s_map2)
{
    s_map2.posmouse.x = sfMouse_getPositionRenderWindow(s_map2.window).x;
    s_map2.posmouse.y = sfMouse_getPositionRenderWindow(s_map2.window).y;
    return (s_map2);
}*/