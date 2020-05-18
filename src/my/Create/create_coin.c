/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** create_coin
*/

#include "proto.h"

sfSprite *create_coin(void)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture;

    texture = sfTexture_createFromFile("lib/Picture/coin.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, (sfVector2f) {rand()%1100, -150});
    return sprite;
}
