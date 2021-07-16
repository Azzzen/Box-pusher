/*
** EPITECH PROJECT, 2021
** B-PSU-200-PAR-2-1-mysokoban-axel.zenine
** File description:
** utility
*/

#include "sokoban.h"

void check_win_2(s *g, int i, int j)
{
    if (g->map_backup[i][j] == 'O' && g->map[i][j] == 'X')
        g->covered_o += 1;
}

char **separate(char *full_line, char dlm)
{
    int j = 0;
    int c = 0;
    char **result = malloc(sizeof(char *) * 500);

    result[j] = malloc(sizeof(char) * 500);
    for (int i = 0; full_line[i] != '\0'; i++) {;
        if (full_line[i] == dlm) {
            j++;
            c = 0;
            result[j] = malloc(sizeof(char) * 500);
            continue;
        }
        result[j][c] = full_line[i];
        c++;
    }
    result[j + 1] = NULL;
    return (result);
}

char *open_map(char *map)
{
    struct stat size;
    char *buffer;
    int fd = open(map, O_RDONLY);

    if (fd == -1)
        exit(84);
    stat(map, &size);
    buffer = malloc(sizeof(char) * (size.st_size + 1));
    buffer[size.st_size] = '\0';
    read(fd, buffer, size.st_size);
    close(fd);
    is_it_a_valid(buffer);
    return (buffer);
}

void measure_buf(s *g)
{
    int i = 0;
    int length = 0;

    for (i = 0; g->map[i] != NULL; i++) {
        if (length < my_strlen(g->map[i]))
            length = my_strlen(g->map[i]);
    }
    g->center_columns = (length/2);
    g->center_lines = i/2;
}

int is_it_a_valid(char *map)
{
    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] != ' ' && map[i] != '\n' && \
map[i] != '#' && map[i] != 'X' && map[i] != 'O' && map[i] != 'P')
            exit (84);
    }
    return (0);
}
