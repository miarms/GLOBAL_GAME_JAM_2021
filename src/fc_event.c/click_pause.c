/*
** EPITECH PROJECT, 2021
**
** File description:
** main.c
*/

#include "../../inc/my.h"

t_game click_pause_play(t_game s_game)
{
    if ((s_game.posmouse.x >= s_game.pos_pause_play.x) && (s_game.posmouse.x <= s_game.pos_pause_play.x + 300) && \
    (s_game.posmouse.y >= s_game.pos_pause_play.y) && (s_game.posmouse.y <= s_game.pos_pause_play.y + 90)) { 
        s_game.rect_pause_play.top = 82;
    } else
        s_game.rect_pause_play.top = 0;
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (s_game.posmouse.x >= s_game.pos_pause_play.x && s_game.posmouse.x <= s_game.pos_pause_play.x + 300 \
            && s_game.posmouse.y >= s_game.pos_pause_play.y && s_game.posmouse.y <= s_game.pos_pause_play.y + 90) {
            s_game.check_pause = 0;
        }
    }
    return (s_game);
}

t_game click_pause_quit(t_game s_game)
{
    if (s_game.posmouse.x >= s_game.pos_pause_quit.x && s_game.posmouse.x <= s_game.pos_pause_quit.x + 300 \
                && s_game.posmouse.y >= s_game.pos_pause_quit.y && s_game.posmouse.y <= s_game.pos_pause_quit.y + 90) {
                s_game.rect_pause_quit.top = 82;
    } else
        s_game.rect_pause_quit.top = 0;
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (s_game.posmouse.x >= s_game.pos_pause_quit.x && s_game.posmouse.x <= s_game.pos_pause_quit.x + 300 \
        && s_game.posmouse.y >= s_game.pos_pause_quit.y && s_game.posmouse.y <= s_game.pos_pause_quit.y + 95) {
            sfRenderWindow_close(s_game.window);
        }
    }
    return (s_game);
}

t_game click_pause_replay(t_game s_game)
{
    if (s_game.posmouse.x >= s_game.pos_pause_replay.x && s_game.posmouse.x <= s_game.pos_pause_replay.x + 300 \
                && s_game.posmouse.y >= s_game.pos_pause_replay.y && s_game.posmouse.y <= s_game.pos_pause_replay.y + 90) {
                s_game.rect_pause_replay.top = 82;
    } else
        s_game.rect_pause_replay.top = 0;
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (s_game.posmouse.x >= s_game.pos_pause_replay.x && s_game.posmouse.x <= s_game.pos_pause_replay.x + 300 \
        && s_game.posmouse.y >= s_game.pos_pause_replay.y && s_game.posmouse.y <= s_game.pos_pause_replay.y + 90) {
            //close_window(s_game.window, s_game.event);
        }
    }
    return (s_game);
}

t_game click_pause(t_game s_game)
{
    s_game = click_pause_play(s_game);
    s_game = click_pause_quit(s_game);
    s_game = click_pause_replay(s_game);

    return (s_game);
}