/*
** EPITECH PROJECT, 2019
** File for BSQ
** File description:
** Epitech Project
*/

#include "../include/bsq.h"

int numbercharbylign(char *buffer)
{
    int i = 0;

    while (buffer[i] != '\n')
        i += 1;
    return (i);
}

static int calc_min2(int a, int b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

int calc_min(int a, int b, int c)
{
    return (calc_min2(calc_min2(a, b), calc_min2(b, c)));
}

void check_struct(int nb, int x, int y, tab_t *bsq)
{
    if (nb > bsq->nb) {
        bsq->nb = nb;
        bsq->x = x;
        bsq->y = y;
    }
}