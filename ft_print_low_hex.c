#include "ft_printf.h"

int ft_print_low_hex(unsigned int low_hex)
{
    int index;
    char    *res;

    res = ft_utoa_base(low_hex, 16);
    index = ft_putstr(res);
    free(res);
    return (index);
}