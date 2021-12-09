#include "ft_printf.h"

int ft_print_u(unsigned int nb)
{
    int index;
    char    *res;

    res = ft_utoa_base(nb, 10);
    index = ft_putstr(res);
    free(res);
    return (index);
}