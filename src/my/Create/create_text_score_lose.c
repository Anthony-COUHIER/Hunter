/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** Create_text_score_lose
*/

#include "proto.h"

sfText *create_text_score_lose(void)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile("lib/Font/Playkidz.ttf");

    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 70);
    sfText_setColor(text, sfBlack);
    sfText_setPosition(text, (sfVector2f) {1000, 385});
    sfText_setStyle(text, sfTextBold);
    return text;
}
