#include "ft_printf.h"

int ft_print_p(unsigned long p)
{
    int index;
    char    *res;
    ft_putstr("0x");
    index = 2;
    res = ft_utoa_base(p, 16);
    index += ft_putstr(res);
    free(res);
    return (index);
}