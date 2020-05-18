/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** proto
*/

#ifndef PROTO_H_
#define PROTO_H_

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define TAM sfTime_asMilliseconds
#define CGE sfClock_getElapsedTime

typedef struct variable
{
    sfSprite *my_cursor;
    sfSprite *background;
    sfSprite *coin;
    sfSprite *mini_coin;
    char *result;
    sfEvent event;
    sfRenderWindow *window;
    sfIntRect rect;
    sfIntRect image_cursor;
    sfIntRect im_score;
    sfText *Text_score;
    float speed;
    int count;
} var_t;

typedef struct menu
{
    int game;
    sfRectangleShape *Button_play;
    sfRectangleShape *back_how;
    sfSprite *background_menu;
    sfSprite *play;
    sfText *My_hunter;
    sfText *text_play;
    sfText *text_lose;
    sfText *text_retry;
    sfText *text_exit;
    sfMusic *sound_coin;
    sfText *Playing;
    sfText *How_playing;
    sfSprite *coin;
    sfText *text_score;
} menu_t;

typedef struct sound
{
    sfMusic *sound_g;
    sfMusic *sound_coin;
} sound_t;

typedef struct clock
{
    sfClock *Clock_anim;
    sfTime Time_anim;
    float second_anim;
    sfClock *Clock_score;
    sfTime Time_score;
    float second_score;
    sfClock *Clock_mouv;
    sfTime Time_mouv;
    float second_mouv;
} c_t;

void create(var_t *var, sound_t *sound, menu_t *menu);
    sfSprite *create_background(void);
    sfSprite *create_mouse(void);
    sfSprite *create_coin();
    sfSprite *create_minicoin();
    sfText *create_text(void);
    sfText *create_text_hunter();
    sfMusic *create_sound_g(void);
    sfMusic *create_sound_coin(void);
    sfSprite *create_background_menu(void);
    sfSprite *create_play(void);
    sfText *create_text_play(void);
    sfRectangleShape *create_rect_play(void);
    sfText *create_text_lose(void);
    sfText *create_text_retry(void);
    sfText *create_text_exit(void);
    sfRectangleShape *create_rect_retry(void);
    sfRectangleShape *create_rect_exit(void);
    sfText *create_text_playing(void);
    sfText *create_text_how_playing(void);
    sfRectangleShape *create_rect_background_play(void);
    sfSprite *create_coin_score_lose(void);
    sfText *create_text_score_lose(void);


sfRenderWindow *genwindow();
void init(var_t *var, c_t *my_clock, sound_t *sound, menu_t *menu);

int main(int argc, char const **argv);

void my_menu(var_t *var, menu_t *menu);
    void click_menu(var_t *var, menu_t *menu);

void in_game(var_t *var, c_t *my_clock, menu_t *menu, sound_t *sound);
    void in_back(var_t *var, c_t *my_clock);
        void score(var_t *var, c_t *my_clock);
            void score_anim(var_t *var, c_t *my_clock);
                void init_clock_score(c_t *my_clock);
                void score_text(var_t *var);
                void update_score(var_t *var);
                void click(var_t *var, sound_t *sound);
    void spawn_coin(var_t *var, c_t *my_clock, menu_t *menu, sound_t *sound);
            void init_clock_mouv(c_t *my_clock);
            void anim(var_t *var, c_t *clock);
            void playing_sound(sound_t *sound);
                void init_clock_anim(c_t *my_clock);
    void end_game(var_t *var, menu_t *menu);
        void click_end_game(var_t *var, menu_t *menu);
void display(var_t *var);
    void my_mouse(var_t *var);
    void my_close(var_t *var);

void my_destroy(var_t *var, c_t *my_clock, sound_t *sound);

#endif /* !PROTO_H_ */
