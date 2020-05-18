/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** create_rect_play
*/

#include "proto.h"

sfRectangleShape *create_rect_play(void)
{
    sfRectangleShape *rectangle = sfRectangleShape_create();

    sfRectangleShape_setFillColor(rectangle, sfTransparent);
    sfRectangleShape_setPosition(rectangle, (sfVector2f) {15, 150});
    sfRectangleShape_setSize(rectangle, (sfVector2f) {250, 100});
    return (rectangle);
}
