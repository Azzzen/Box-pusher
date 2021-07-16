/*
** EPITECH PROJECT, 2020
** all prototypes
** File description:
** in the lib
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Types.h>
#include <SFML/System/Vector2.h>
#include <stdio.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/System/Export.h>

void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int power);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(char const *str, int size);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int  my_show_word_array(char * const *tab);
void my_printf(char *fmt, ...);
void my_println(char *fmt, ...);
unsigned int my_put_un_nbr(unsigned int i);
unsigned int my_put_oct(unsigned int i);
unsigned int my_put_un_bin(unsigned int i);
unsigned int my_put_hex(unsigned int i);
unsigned int my_put_cap_hex(unsigned int i);
int nonprint_to_oct(char *str);
char *my_itoa(int nb);
#endif
