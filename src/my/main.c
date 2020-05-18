/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** my_hunter
*/

#include "proto.h"

int main(int argc, char const **argv)
{
    var_t var;
    c_t my_clock;
    sound_t sound;
    menu_t menu;

    var.window = genwindow();
    create(&var, &sound, &menu);
    init(&var, &my_clock, &sound, &menu);
    while (sfRenderWindow_isOpen(var.window)) {
        display(&var);
        if (menu.game == 0)
            my_menu(&var, &menu);
        else if (menu.game == 1)
            in_game(&var, &my_clock, &menu, &sound);
        else
            end_game(&var, &menu);
    }
    my_destroy(&var, &my_clock, &sound);
    return (0);
}
