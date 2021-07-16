/*
** EPITECH PROJECT, 2021
** B-MUL-100-PAR-1-1-myrunner-axel.zenine
** File description:
** my_itoa
*/

#include "my.h"

char *my_itoa(int nb)
{
    int is_neg = nb < 0;
    int count = 0;
    char *str = malloc(sizeof(char) * 20);
    for (int i = 0; i < 20; i++)
        str[i] = '\0';
    if (nb == 0){
        return "0";
    }
    if (is_neg)
        nb *= -1;
    while (nb > 0) {
        str[count++] = (nb % 10) + '0';
        nb /= 10;
    }
    if (is_neg)
        str[count++] = '-';
    str = my_revstr(str);
    return (str);
}