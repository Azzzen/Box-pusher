/*
** EPITECH PROJECT, 2021
** B-PSU-200-PAR-2-1-mysokoban-axel.zenine
** File description:
** find
*/

#include "sokoban.h"

void find_p(s *g, int i, int j)
{
    if (g->map[i][j] == 'P') {
        g->p_l = i;
        g->p_c = j;
    }
}

void find_chara(s *g)
{
    for (int i = 0; g->map[i] != NULL; i++) {
        for (int j = 0; g->map[i][j] != '\0'; j++) {
            find_p(g, i, j);
        }
    }
}