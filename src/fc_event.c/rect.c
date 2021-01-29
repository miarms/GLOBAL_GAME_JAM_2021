/*
** EPITECH PROJECT, 2021
** 
** File description:
** rect.c
*/

#include "../../inc/my.h"

t_window move_rect_all(t_window s_window)
{   
    sfSprite_setTextureRect(s_window.splay, s_window.rect_play);
    sfSprite_setTextureRect(s_window.squit, s_window.rect_quit);
    sfSprite_setTextureRect(s_window.shtp, s_window.rect_htp);
    return (s_window);
}