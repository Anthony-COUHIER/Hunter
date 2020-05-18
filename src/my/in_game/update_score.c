/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** update_score
*/

#include "proto.h"

void update_score(var_t *var)
{
    int i = 0;
    int res = var->count;
    int temp = var->count;

    while (temp > 0) {
        temp = temp / 10;
        i++;
    }
    var->result = malloc(sizeof(char) * i + 1);
    var->result[i] = '\0';
    while (i--) {
        var->result[i] = res % 10 + '0';
        res /= 10;
    }
    sfText_setString(var->Text_score, var->result);
}
