/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** create_coin_score_lose
*/

#include "proto.h"

sfSprite *create_coin_score_lose(void)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture;
    sfIntRect rect = (sfIntRect) {0, 0, 84, 84};

    texture = sfTexture_createFromFile("lib/Picture/coin.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setPosition(sprite, (sfVector2f) {875, 385});
    return sprite;
}
