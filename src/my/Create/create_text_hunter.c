/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** create_text_hunter
*/

#include "proto.h"

sfText *create_text_hunter(void)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile("lib/Font/Playkidz.ttf");

    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 100);
    sfText_setColor(text, sfBlack);
    sfText_setPosition(text, (sfVector2f) {720, 210});
    sfText_setStyle(text, sfTextBold);
    sfText_setString(text, "My Hunter");
    return text;
}
