/*
** EPITECH PROJECT, 2021
** B-PSU-200-PAR-2-1-mysokoban-axel.zenine
** File description:
** main
*/

#include "sokoban.h"

void print_usage (void)
{
    my_printf("USAGE\n     ./my_sokoban map\nDESCRIPTION\n");
    my_printf("     map  file representing the warehouse map, containing '#'");
    my_printf(" for walls, \n\t  'P' for the player, 'X' for boxes and 'O'");
    my_println(" for storage locations.");
    exit(0);
}

int start_everything(s *g)
{
    start_game(g);
    g->covered_o = 0;
    g->holes = 0;
    g->boxes = 0;
    g->blocked_boxes = 0;
    return (0);
}

int main (int ac, char **av)
{
    if (ac != 2)
        return (84);
    else if (av[1][0] == '-' && av[1][1] == 'h')
        print_usage();
    s *g = malloc(sizeof(s));
    g->map = separate(open_map(av[1]), '\n');
    g->map_backup = separate(open_map(av[1]), '\n');
    start_everything(g);
    return (0);
}