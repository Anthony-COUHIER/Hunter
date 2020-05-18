/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** display
*/

#include "proto.h"

void display(var_t *var)
{
        my_close(var);
        my_mouse(var);
        sfRenderWindow_display(var->window);
        sfRenderWindow_clear(var->window, sfBlack);
}
