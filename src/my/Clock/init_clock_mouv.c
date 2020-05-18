/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** init_clock_mouv
*/

#include "proto.h"

void init_clock_mouv(c_t *my_clock)
{
    my_clock->Time_mouv = sfClock_getElapsedTime(my_clock->Clock_mouv);
    my_clock->second_mouv = my_clock->Time_mouv.microseconds / 1000000.0;
}
