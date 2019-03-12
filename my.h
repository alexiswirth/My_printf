/*
** EPITECH PROJECT, 2018
** my h
** File description:
** my lib
*/
#ifndef _MY_H_
#define _MY_H_

#include <stdarg.h>

typedef struct type_s
{
    char type;
    void (*function)(va_list);
} type_t;

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_put_nbr(int nb);
int my_putnbr_base(unsigned int nbr, char const *base);
char* my_printf(char *str, ...);
void type_int(va_list);
void type_string(va_list);
void type_octa(va_list);
void type_purcent(va_list);
void type_aro(va_list);
void type_bin(va_list);
void type_char(va_list);
void type_putnbrbase(va_list);
void type_putnbrbase2(va_list);

#endif
