/*
** EPITECH PROJECT, 2018
** function for my_printf
** File description:
** my printf
*/
#include "my.h"
#include <stdarg.h>

void type_octa(va_list args)
{
    my_putnbr_base(va_arg(args, int), "01234567");
}

void type_bin(va_list args)
{
    my_putnbr_base(va_arg(args, int), "01");
}

void type_purcent(va_list args)
{
    (void)args;
    my_putchar('%');
}

void type_aro(va_list args)
{
    (void)args;
    my_putchar('@');
}
