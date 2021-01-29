#include "../inc/my.h"

sfIntRect fc_rect(int top, int left, int width, int height)
{
    sfIntRect rect;
	rect.top = top;
	rect.left = left;
	rect.width = width;
	rect.height = height;
	return (rect);
}

sfVector2f fc_pos(int x, int y)
{
    sfVector2f vector;
    vector.x = x;
    vector.y = y;
    return (vector);
}

void close_window(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(window);
        sfRenderWindow_destroy(window);
        exit (0);
    }
}