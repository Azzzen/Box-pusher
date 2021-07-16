/*
** EPITECH PROJECT, 2021
** replace
** File description:
** replace
*/

#include "my.h"
#include "sokoban.h"

int check_win(s *g) {
    for (int i = 0; g->map_backup[i] != NULL; i++) {
        for (int j = 0; g->map_backup [i][j] != '\0'; j++) {
            check_win_2(g, i, j);
        }
    }
    if (g->covered_o == g->holes) {
        clear();
        display(g);
        refresh();
        endwin();
        return (0);
    }
    return (1);
}

void replace_o(s *g, int i, int j)
{
    if (g->map_backup[i][j] == 'O' && g->map[i][j] == ' ')
        g->map[i][j] = 'O';
}

void count_o(s *g, int i) {
    for (int j = 0; g->map_backup[i][j] != '\0'; j++) {
        if (g->map_backup[i][j] == 'O')
            g->holes += 1;
    }
}

void check_and_replace(s *g)
{
    for (int i = 0; g->map_backup[i] != NULL; i++) {
        for (int j = 0; g->map_backup[i][j] != '\0'; j++) {
            replace_o(g, i, j);
        }
    }
}