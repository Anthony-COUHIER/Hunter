/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** create_sprite
*/

#include "proto.h"

sfSprite *create_background(void)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture;

    texture = sfTexture_createFromFile("lib/Picture/Fond_jeu.jpg", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    return sprite;
}
