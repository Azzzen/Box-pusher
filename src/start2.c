/*
** EPITECH PROJECT, 2021
** B-PSU-200-PAR-2-1-mysokoban-axel.zenine
** File description:
** start2
*/

#include "sokoban.h"

void display(s *g)
{
    for (int i = 0; g->map[i] != NULL; i++) {
        mvprintw(((LINES/2 - g->center_lines)+ i), (COLS/2 - \
        g->center_columns), g->map[i]);
    }
}

int count_contact(s *g, int i, int j)
{
    int contacts = 0;
    char over = g->map[i-1][j];
    char under = g->map[i+1][j];
    char right = g->map[i][j-1];
    char left = g->map[i][j+1];

    contacts += (over == 'X' || over == '#') ? 1: 0;
    contacts += (under == 'X' || under == '#') ? 1: 0;
    contacts += (right == 'X' || right == '#') ? 1: 0;
    contacts += (left == 'X' || left == '#') ? 1: 0;
    if (contacts > 1)
        return (contacts);
    return (0);
}

void check_window(s *g)
{
    while (LINES < (g->center_columns * 2) || COLS < (g->center_lines *2)) {
        clear();
        move(LINES/2, COLS/2 - 9);
        printw("Resize me please !");
        refresh();
    }
}

void is_this_loss_2(s *g, int i, int j)
{
    if (g->map[i][j] == 'X' && (count_contact(g, i, j) > 0))
        g->blocked_boxes += 1;
}

void count_boxes_and_holes_2(s *g, char place)
{
    if (place == 'X')
        g->boxes += 1;
    if (place == 'O')
        g->holes += 1;

}