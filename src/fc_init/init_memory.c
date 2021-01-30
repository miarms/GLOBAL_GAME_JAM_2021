
#include "../../inc/my.h"


t_memory init_sprite_memory(t_memory s_memory)
{
    s_memory.shappy1 = sfSprite_create();
    s_memory.ssad1 = sfSprite_create();
    s_memory.shappy2 = sfSprite_create();
    s_memory.ssad2 = sfSprite_create();
    return (s_memory);
}

t_memory init_texture_memory(t_memory s_memory)
{
    s_memory.thappy1 = sfTexture_createFromFile("ressources/img/map/happy.png", NULL);
    sfSprite_setTexture(s_memory.shappy1, s_memory.thappy1, sfTrue);
    s_memory.tsad1 = sfTexture_createFromFile("ressources/img/map/sad.png", NULL);
    sfSprite_setTexture(s_memory.ssad1, s_memory.tsad1, sfTrue);
    s_memory.thappy2 = sfTexture_createFromFile("ressources/img/map/happy.png", NULL);
    sfSprite_setTexture(s_memory.shappy2, s_memory.thappy2, sfTrue);
    s_memory.tsad2 = sfTexture_createFromFile("ressources/img/map/sad.png", NULL);
    sfSprite_setTexture(s_memory.ssad2, s_memory.tsad2, sfTrue);
    return (s_memory);
}

t_memory init_pos_memory(t_memory s_memory)
{
    s_memory.poshappy1 = fc_pos(1700,615);
    sfSprite_setPosition(s_memory.shappy1, s_memory.poshappy1);
    printf("init_pos_memory ok _\n");
    s_memory.possad1 = fc_pos(1870,615);
    sfSprite_setPosition(s_memory.ssad1, s_memory.possad1);
    s_memory.poshappy2 = fc_pos(1900,615);
    sfSprite_setPosition(s_memory.shappy2, s_memory.poshappy2);
    s_memory.possad2= fc_pos(1910,615);
    sfSprite_setPosition(s_memory.ssad2, s_memory.possad2);
    return (s_memory);
}

void draw_sprite_memory(t_memory s_memory)
{
    sfRenderWindow_drawSprite(s_memory.window, s_memory.shappy1, NULL);
    sfRenderWindow_drawSprite(s_memory.window, s_memory.ssad1, NULL);
    sfRenderWindow_drawSprite(s_memory.window, s_memory.shappy2, NULL);
    sfRenderWindow_drawSprite(s_memory.window, s_memory.ssad2, NULL);
}

t_memory move_memory_others(t_memory s_memory)
{   
    sfSprite_setPosition(s_memory.shappy1, s_memory.poshappy1);
    s_memory.poshappy1.x = s_memory.poshappy1.x - 6;
    if (s_memory.poshappy1.x < -1600) {
        s_memory.poshappy1.x = 1700;
    }
    sfSprite_setPosition(s_memory.ssad1, s_memory.possad1);
    s_memory.possad1.x = s_memory.possad1.x - 7;
    if (s_memory.possad1.x < -1600) {
        s_memory.possad1.x = 1900;
    }
    sfSprite_setPosition(s_memory.shappy2, s_memory.poshappy2);
    s_memory.poshappy2.x = s_memory.poshappy2.x - 6;
    if (s_memory.poshappy1.x < -1600) {
        s_memory.poshappy1.x = 1670;
    }
    sfSprite_setPosition(s_memory.ssad2, s_memory.possad2);
    s_memory.possad2.x = s_memory.possad2.x - 5;
    if (s_memory.possad2.x < -1600) {
        s_memory.possad2.x = 1800;
    }
    return (s_memory);
}

t_memory init_memory(t_memory s_memory, t_window s_window)
{
    s_memory.window = s_window.window;
    s_memory.event = s_window.event;
    s_memory = init_sprite_memory(s_memory);
    s_memory = init_texture_memory(s_memory);
    s_memory = init_pos_memory(s_memory);

    return (s_memory);
}