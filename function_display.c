/*
** EPITECH PROJECT, 2018
** function for my_printf
** File description:
** my printf
*/
#include "my.h"
#include <stdarg.h>

void type_int(va_list args)
{
    my_put_nbr(va_arg(args, int));
}
void type_char(va_list args)
{
    my_putchar((char)va_arg(args, int));
}
void type_string(va_list args)
{
    my_putstr(va_arg(args, char*));
}
void type_putnbrbase(va_list args)
{
    my_putnbr_base(va_arg(args, int),"0123456789ABCDEF");
}
void type_putnbrbase2(va_list args)
{
    my_putnbr_base(va_arg(args, int),"0123456789abcdef");
}
