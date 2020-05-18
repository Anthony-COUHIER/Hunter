/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** in_game
*/

#include "proto.h"

void in_game(var_t *var, c_t *my_clock, menu_t *menu, sound_t *sound)
{
    in_back(var, my_clock);
    spawn_coin(var, my_clock, menu, sound);
}
