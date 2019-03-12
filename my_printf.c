/*
** EPITECH PROJECT, 2018
** my printf
** File description:
** my printf unix
*/
#include "my.h"
#include <stdarg.h>
#include <stdlib.h>

type_t array[] = {
{'d', &type_int},
{'i', &type_int},
{'c', &type_char},
{'s', &type_string},
{'X', &type_putnbrbase},
{'x', &type_putnbrbase2},
{'o', &type_octa},
{'b', &type_bin},
{'@', &type_aro},
{'%', &type_purcent},
{'0', NULL},
};

char* my_printf(char *str, ...)
{
    va_list args;
    va_start(args, str);
    int iarray = 0;

    for (; str[0] != '\0'; str++) {
        if (str[0] == '%'){
          str++;
            while (array[iarray].type != 0) {
                if (str[0] == array[iarray].type) {
                    array[iarray].function(args);
                }
                iarray++;
            }
        }
        else {
            my_putchar(str[0]);
        }
        iarray = 0;
    }
    va_end(args);
    return (0);
}
