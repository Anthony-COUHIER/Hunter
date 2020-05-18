/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** create_rect_background_play
*/

#include "proto.h"

sfRectangleShape *create_rect_background_play(void)
{
    sfRectangleShape *rectangle = sfRectangleShape_create();

    sfRectangleShape_setFillColor(rectangle, sfBlue);
    sfRectangleShape_setPosition(rectangle, (sfVector2f) {12, 500});
    sfRectangleShape_setSize(rectangle, (sfVector2f) {400, 125});
    return (rectangle);
}
