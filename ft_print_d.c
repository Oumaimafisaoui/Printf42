#include "ft_printf.h"

int ft_print_d(int nb)
{
    int index;
    char *res;

    res = ft_itoa(nb);
    index = ft_putstr(res);
    free(res);
    return (index);
}