/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** genwindow
*/

#include "proto.h"

sfRenderWindow *genwindow(void)
{
    sfVideoMode size = {1280, 640, 32};
    sfRenderWindow *window;

    window = sfRenderWindow_create(size, "My Hunter", sfClose, NULL);
    sfRenderWindow_setPosition(window, (sfVector2i) {325, 200});
    sfRenderWindow_setFramerateLimit(window, 60);
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    return (window);
}
