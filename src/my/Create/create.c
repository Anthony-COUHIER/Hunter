/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** create_sprite
*/

#include "proto.h"

void create(var_t *var, sound_t *sound, menu_t *menu)
{
    var->background = create_background();
    menu->background_menu = create_background_menu();
    var->my_cursor = create_mouse();
    var->coin = create_coin();
    var->mini_coin = create_minicoin();
    var->Text_score = create_text();
    menu->My_hunter = create_text_hunter();
    sound->sound_g = create_sound_g();
    sound->sound_coin = create_sound_coin();
    menu->play = create_play();
    menu->text_play = create_text_play();
    menu->Button_play = create_rect_play();
    menu->text_lose = create_text_lose();
    menu->text_retry = create_text_retry();
    menu->text_exit = create_text_exit();
    menu->Playing = create_text_playing();
    menu->How_playing = create_text_how_playing();
    menu->back_how = create_rect_background_play();
    menu->coin = create_coin_score_lose();
    menu->text_score = create_text_score_lose();
}
