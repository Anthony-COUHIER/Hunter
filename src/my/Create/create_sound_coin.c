/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** create_sound_coin
*/

#include "proto.h"

sfMusic *create_sound_coin(void)
{
    sfMusic *music = sfMusic_createFromFile("lib/Sound/Coin/Ping1.ogg");

    sfMusic_setVolume(music, 50);
    return music;
}
