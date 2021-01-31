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

typedef struct s_intro  {
    sfRenderWindow *window;
    sfVector2f posmouse;
    sfEvent event;
    sfSprite *sintro;
    sfTexture *tintro;
    sfVector2f posintro;
    sfIntRect rect_intro;
    sfClock *timer_intro;
    sfTime timergame_intro;
    float secgame_intro;
    sfSprite *sskip;
    sfTexture *tskip;
    sfVector2f posskip;
    sfIntRect rect_skip;
    sfClock *timer_skip;
    sfTime timergame_skip;
    float secgame_skip;
    sfMusic *music_intro;
} t_intro;


typedef struct s_game {
    sfRenderWindow *window;
    sfVector2f posmouse;
    sfEvent event;
    //SOL
    sfSprite *s_sol;
    sfTexture *t_sol;
    sfVector2f pos_sol;
    //BATIMENT
    sfSprite *s_batiment;
    sfTexture *t_batiment;
    sfVector2f pos_batiment;
    //CIEL
    sfSprite *s_ciel;
    sfTexture *t_ciel;
    sfVector2f pos_ciel;
    //PERSO
    sfSprite *sperso;
    sfTexture *tperso;
    sfVector2f posperso;
    sfIntRect rect_perso;
    sfClock *timer_perso;
    sfTime timergame_perso;
    float secgame_perso;
    //PERSO JUMP
    sfClock *clock_jump;
    sfTime time_jump;
    float second_jump;
    int ct_jump;
    //PERSO HALO
    int check_halo;
    sfSprite *s_halo_blue;
    sfTexture *t_halo_blue;
    sfVector2f pos_halo_blue;
    sfSprite *s_halo_orange;
    sfTexture *t_halo_orange;
    sfVector2f pos_halo_orange;
    //MEMORY
    sfSprite *shappy;
    sfTexture *thappy;
    sfVector2f poshappy;
    sfIntRect rect_happy;
    sfSprite *ssad;
    sfTexture *tsad;
    sfVector2f possad;
    sfIntRect rect_sad;
    //PAUSE
    int check_pause;
    sfSprite *s_pause;
    sfTexture *t_pause;
    sfVector2f pos_pause;
    //BUTTOM PLAY OF PAUSE
    sfSprite *s_pause_play;
    sfTexture *t_pause_play;
    sfVector2f pos_pause_play;
    sfIntRect rect_pause_play;
    //BUTTOM QUIT OF PAUSE
    sfSprite *s_pause_quit;
    sfTexture *t_pause_quit;
    sfVector2f pos_pause_quit;
    sfIntRect rect_pause_quit;
    //BUTTOM REPLAY OF PAUSE
    sfSprite *s_pause_replay;
    sfTexture *t_pause_replay;
    sfVector2f pos_pause_replay;
    sfIntRect rect_pause_replay;

} t_game;

typedef struct s_memory {
    sfRenderWindow *window;
    sfVector2f posmouse;
    sfEvent event;
    int check_pause;
    sfSprite *shappy1;
    sfTexture *thappy1;
    sfVector2f poshappy1;
    sfIntRect rect_happy1;
    sfSprite *ssad1;
    sfTexture *tsad1;
    sfVector2f possad1;
    sfIntRect rect_sad1;
    sfSprite *shappy2;
    sfTexture *thappy2;
    sfVector2f poshappy2;
    sfIntRect rect_happy2;
    sfSprite *ssad2;
    sfTexture *tsad2;
    sfVector2f possad2;
    sfIntRect rect_sad2;

} t_memory;

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
t_window click_menu_htp(t_window s_window);
void menu();

/*INTRO*/
t_intro get_mouse_intro(t_intro s_intro);
t_intro init_sprite_intro(t_intro s_intro);
t_intro init_texture_intro(t_intro s_intro);
t_intro init_pos_intro(t_intro s_intro);
t_intro init_rect_intro(t_intro s_intro);
t_intro init_intro(t_intro s_intro, t_window s_window);
t_intro init_clock_intro(t_intro s_intro);
t_intro move_rect_intro(t_intro s_intro);
void draw_sprite_intro(t_intro s_intro);
void intro(t_window s_window);
t_intro click_skip(t_intro s_intro, t_window s_window);
/*MAP*/
t_game init_map(t_game s_game, t_window s_window);
t_game init_texture_map(t_game s_game);
t_game init_sprite_map(t_game s_game);
void draw_sprite_map(t_game sgame);
t_game init_rect_map(t_game s_game);
void map(t_window s_window);
t_game init_clock_perso(t_game s_game);
t_game event_perso(t_game s_game, t_memory s_memory);
t_game jump_perso(t_game s_game);
t_game collision_memory(t_game s_game, t_memory s_memory);
t_game get_mouse_map(t_game s_game);
t_game move_rect_map(t_game s_game);
t_game move_background(t_game s_game);
t_game move_memory(t_game s_game);
t_game click_pause(t_game s_game);
t_game click_pause_play(t_game s_game);
t_game click_pause_quit(t_game s_game);
t_game click_pause_replay(t_game s_game);
/*MEMORY*/
t_memory init_sprite_memory(t_memory s_memory);
t_memory init_texture_memory(t_memory s_memory);
t_memory init_pos_memory(t_memory s_memory);
void draw_sprite_memory(t_memory s_memory);
t_memory init_memory(t_memory s_memory, t_window s_window);
t_memory move_memory_others(t_memory s_memory);
#endif