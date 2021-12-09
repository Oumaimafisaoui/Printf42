#include "ft_printf.h"

int ft_print_str(char *s)
{
    int index;

    index = 0;
    if (!s)
    {
        write(1, "(null)", 6);
        return (6);
    }
    while (*s)
    {
        write(1, s, 1);
        s++;
        index++;
    }
    return (index);
}