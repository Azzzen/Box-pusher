/*
** EPITECH PROJECT, 2021
** B-PSU-200-PAR-2-1-mysokoban-axel.zenine
** File description:
** move_box
*/

#include "sokoban.h"

void move_box_up(s *g)
{
    if (g->map[g->p_l-2][g->p_c] != '#' && g->map[g->p_l-2][g->p_c] != 'X') {
        g->map[g->p_l-1][g->p_c] = 'P';
        g->map[g->p_l-2][g->p_c] = 'X';
        g->map[g->p_l][g->p_c] = ' ';
    }
}

void move_box_down(s *g)
{
    if (g->map[g->p_l+2][g->p_c] != '#' && g->map[g->p_l+2][g->p_c] != 'X') {
        g->map[g->p_l+1][g->p_c] = 'P';
        g->map[g->p_l+2][g->p_c] = 'X';
        g->map[g->p_l][g->p_c] = ' ';
    }
}

void move_box_right(s *g)
{
    if (g->map[g->p_l][g->p_c+2] != '#' && g->map[g->p_l][g->p_c+2] != 'X') {
        g->map[g->p_l][g->p_c+1] = 'P';
        g->map[g->p_l][g->p_c+2] = 'X';
        g->map[g->p_l][g->p_c] = ' ';
}
}

void move_box_left(s *g)
{
    if (g->map[g->p_l][g->p_c-2] != '#' && g->map[g->p_l][g->p_c-2] != 'X') {
        g->map[g->p_l][g->p_c-1] = 'P';
        g->map[g->p_l][g->p_c-2] = 'X';
        g->map[g->p_l][g->p_c] = ' ';
    }
}

void move_box(s *g, char direction)
{
    if (direction == 'd' || direction == 'u' ) {
        if (direction == 'd')
            move_box_down(g);
        else if (direction == 'u')
            move_box_up(g);
    } else if (direction == 'r' || direction == 'l' ) {
        if (direction == 'r')
            move_box_right(g);
        else if (direction == 'l')
            move_box_left(g);
    }
}