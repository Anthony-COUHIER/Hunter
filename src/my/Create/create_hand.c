/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** create_hand
*/

#include "proto.h"

sfSprite *create_mouse(void)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile("lib/Picture/hand.png", NULL);

    sfSprite_setTexture(sprite, texture, sfTrue);
    return (sprite);
}
