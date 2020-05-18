/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** event
*/

#include "proto.h"

void my_close(var_t *var)
{
    while (sfRenderWindow_pollEvent(var->window, &var->event))
        if (var->event.type == sfEvtClosed)
            sfRenderWindow_close(var->window);
}
