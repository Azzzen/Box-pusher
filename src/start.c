/*
** EPITECH PROJECT, 2021
** B-PSU-200-PAR-2-1-mysokoban-axel.zenine
** File description:
** start
*/

#include "sokoban.h"

int is_this_loss(s *g)
{
    for (int i = 0; g->map_backup[i] != NULL; i++) {
        for (int j = 0; g->map_backup[i][j] != '\0'; j++) {
            is_this_loss_2(g, i, j);
        }
    }
    if (g->blocked_boxes == g->boxes) {
        clear();
        display(g);
        refresh();
        endwin();
        return (1);
    }
    return (0);
}

void count_boxes_and_holes(s *g)
{
    for (int i = 0; g->map_backup[i] != NULL; i++) {
        for (int j = 0; g->map_backup[i][j] != '\0'; j++) {
            count_boxes_and_holes_2(g, g->map_backup[i][j]);
        }
    }
}

void alt_moves(s *g, int c)
{
    find_chara(g);
    check_and_replace(g);
    display(g);
    noecho();
}

int  moves(s *g, int c)
{
    check_window(g);
    find_chara(g);
    check_and_replace(g);
    display(g);
    noecho();
    c = getch();
    if (c == ' ')
        g->map = g->map_backup;
    move_p(g, c);
    return (0);
}

int start_game(s *g)
{
    int c;

    count_boxes_and_holes(g);
    initscr();
    keypad(stdscr, TRUE);
    measure_buf(g);
    curs_set(0);
    while (1) {
        clear();
        moves(g, c);
        if (is_this_loss(g) != 0)
            return (1);
        else if (check_win(g) == 0)
            return (0);
        g->covered_o = 0;
        g->blocked_boxes = 0;
    }
    endwin();
    return (0);
}