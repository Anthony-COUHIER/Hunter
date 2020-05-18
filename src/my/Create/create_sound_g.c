/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** create_sound_g
*/

#include "proto.h"

sfMusic *create_sound_g(void)
{
    sfMusic *music = sfMusic_createFromFile("lib/Sound/music_g.ogg");

    sfMusic_setLoop(music, sfTrue);
    sfMusic_play(music);
    return music;
}
