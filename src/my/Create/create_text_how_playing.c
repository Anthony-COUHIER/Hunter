/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** create_text_how_playing
*/

#include "proto.h"

sfText *create_text_how_playing(void)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile("lib/Font/Playkidz.ttf");
    char *str = "Click on the coins to take\nthe money as the stingy you are";

    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 25);
    sfText_setColor(text, sfBlack);
    sfText_setPosition(text, (sfVector2f) {15, 550});
    sfText_setStyle(text, sfTextBold);
    sfText_setString(text, str);
    return text;
}
