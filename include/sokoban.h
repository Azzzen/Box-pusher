/*
** EPITECH PROJECT, 2021
** B-PSU-200-PAR-2-1-mysokoban-axel.zenine
** File description:
** sokoban
*/

#ifndef SOKOBAN_H_
#define SOKOBAN_H_

#include "my.h"
#include <ncurses.h>

typedef struct {
    char *given_map;
    int center_lines;
    int center_columns;
    char **map;
    char **map_backup;
    int p_l;
    int p_c;
    int blocked_boxes;
    int holes;
    int boxes;
    int covered_o;
    int error;
} s;

/*MAIN*/
int start_game(s *g);
void print_usage (void);

/*UTILITY*/
char **separate(char *full_line, char dlm);
char *open_map(char *map);
void measure_buf(s *g);
int is_it_a_valid(char *map);
int valid_loop(char place);
void check_win_2(s *g, int i, int j);

/*FIND*/
void find_chara(s *g);
void find_p(s *g, int i, int j);

/*MOVE_P*/
void move_p(s *g, int c);
void p_up_down(s *g, int c);
void p_right_left(s *g, int c);

/*MOVE_BOX*/
void move_box(s *g, char direction);
void move_box_left(s *g);
void move_box_right(s *g);
void move_box_up(s *g);
void move_box_down(s *g);

/*REPLACE*/
void check_and_replace(s *g);
int check_win(s *g);
void replace_o(s *g, int i, int j);
void count_o(s *g, int i);

/*START*/
void count_boxes_and_holes(s *g);
int is_this_loss(s *g);
int count_contact(s *g, int i, int j);

/*START2*/
void display(s *g);
int count_contact(s *g, int i, int j);
void check_window(s *g);
void count_boxes_and_holes_2(s *g, char place);
void is_this_loss_2(s *g, int i, int j);

/*MAIN*/
int start_everything(s *g);
#endif