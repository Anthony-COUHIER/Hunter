/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** create_play
*/

#include "proto.h"

sfSprite *create_play(void)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture;

    texture = sfTexture_createFromFile("lib/Picture/Play.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, (sfVector2f) {15, 150});
    return sprite;
}

