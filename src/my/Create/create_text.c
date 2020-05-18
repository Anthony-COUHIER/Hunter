/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** create_font
*/

#include "proto.h"

sfText *create_text(void)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile("lib/Font/Playkidz.ttf");
    char *str = "0";

    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 45);
    sfText_setColor(text, sfBlack);
    sfText_setPosition(text, (sfVector2f) {62, 3});
    sfText_setStyle(text, sfTextBold);
    sfText_setString(text, str);
    return text;
}
