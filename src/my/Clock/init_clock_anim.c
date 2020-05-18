/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** init_clock_anim
*/

#include "proto.h"

void init_clock_anim(c_t *my_clock)
{
    my_clock->Time_anim = sfClock_getElapsedTime(my_clock->Clock_anim);
    my_clock->second_anim = my_clock->Time_anim.microseconds / 1000000.0;
}
