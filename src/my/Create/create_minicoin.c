/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** create_minicoin
*/

#include "proto.h"

sfSprite *create_minicoin(void)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture;

    texture = sfTexture_createFromFile("lib/Picture/mini_coin.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, (sfVector2f) {3, 5});
    return sprite;
}
