/*
** EPITECH PROJECT, 2021
** B-PSU-200-PAR-2-1-mysokoban-axel.zenine
** File description:
** move_p
*/

#include "sokoban.h"

void move_p(s *g, int c)
{
    find_chara(g);
    if (c == KEY_DOWN || c == KEY_UP)
        p_up_down(g, c);
    else if (c == KEY_RIGHT || c == KEY_LEFT)
        p_right_left(g, c);
}

void p_up_down(s *g, int c)
{
    if (c == KEY_DOWN && \
    g->map[g->p_l +1][g->p_c] != '#') {
        clear();
        if (g->map[g->p_l+1][g->p_c] == 'X')
            move_box(g, 'd');
        else {
            g->map[g->p_l][g->p_c] = ' ';
            g->map[g->p_l+1][g->p_c] = 'P';
        }

    } else if (c == KEY_UP && \
    g->map[g->p_l -1][g->p_c] != '#') {
        clear();
        if (g->map[g->p_l-1][g->p_c] == 'X')
            move_box(g, 'u');
        else {
        g->map[g->p_l][g->p_c] = ' ';
        g->map[g->p_l-1][g->p_c] = 'P';
        }
    }
}

void p_right_left(s *g, int c)
{
    if (c == KEY_RIGHT && \
    g->map[g->p_l][g->p_c+1] != '#') {
        clear();
        if (g->map[g->p_l][g->p_c+1] == 'X')
            move_box(g, 'r');
        else {
            g->map[g->p_l][g->p_c] = ' ';
            g->map[g->p_l][g->p_c+1] = 'P';
        }

    } else if (c == KEY_LEFT && \
    g->map[g->p_l][g->p_c-1] != '#') {
        clear();
        if (g->map[g->p_l][g->p_c-1] == 'X')
            move_box(g, 'l');
        else {
            g->map[g->p_l][g->p_c] = ' ';
            g->map[g->p_l][g->p_c-1] = 'P';
        }
    }
}