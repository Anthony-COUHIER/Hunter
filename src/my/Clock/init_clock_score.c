/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** init_clock_score
*/

#include "proto.h"

void init_clock_score(c_t *my_clock)
{
    my_clock->Time_score = sfClock_getElapsedTime(my_clock->Clock_score);
    my_clock->second_score = my_clock->Time_score.microseconds / 1000000.0;
}
