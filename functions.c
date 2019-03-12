/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** function
*/
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_strlen(char const *str)
{
    int i = 0;

    for(;str[i]; i++);
    return (i);
}

int my_putstr(char const *str)
{
    int i =0;

    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}

int my_putnbr_base(int nbr, char const *base)
{
    int i = my_strlen(base);

    if (nbr < 0) {
        nbr = nbr * (-1);
        my_putchar('-');
    }
    if (nbr == 0)
        return (0);
    else
        my_putnbr_base(nbr / i , base);
    my_putchar(base[nbr % i]);
    return (0);
}

int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar('2');
        nb = 147483648;
    }
    if (nb < 0) {
	my_putchar('-');
	my_put_nbr(-nb);
	return (0);
    }
    if (nb < 10) {
	my_putchar('0' + nb);
	return (0);
    }
    my_put_nbr(nb / 10);
    my_putchar('0' + nb % 10);
    return (0);
}
