/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** create_text_exit
*/

#include "proto.h"

sfText *create_text_exit(void)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile("lib/Font/Playkidz.ttf");

    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 60);
    sfText_setColor(text, sfBlack);
    sfText_setPosition(text, (sfVector2f) {125, 250});
    sfText_setStyle(text, sfTextBold);
    sfText_setString(text, "Exit");
    return text;
}
