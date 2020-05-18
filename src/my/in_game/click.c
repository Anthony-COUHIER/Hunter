/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** click
*/

#include "proto.h"

void click(var_t *var, sound_t *sound)
{
    sfFloatRect hitbox = sfSprite_getGlobalBounds(var->coin);
    int x = sfMouse_getPositionRenderWindow(var->window).x;
    int y = sfMouse_getPositionRenderWindow(var->window).y;
    sfBool click = sfMouse_isButtonPressed(sfMouseLeft);

    if (sfFloatRect_contains(&hitbox, x, y) && click) {
        var->count++;
        if (var->count < 4)
            var->speed *= 1.5;
        else if (var->count > 10)
            var->speed *= 1.2;
        sfMusic_stop(sound->sound_coin);
        sfMusic_play(sound->sound_coin);
        update_score(var);
        sfSprite_setPosition(var->coin, (sfVector2f) {rand()%1100, -150});
    }
}
