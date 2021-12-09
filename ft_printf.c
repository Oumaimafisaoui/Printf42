#include "ft_printf.h"

int ft_check_format(char s, va_list argument);

int ft_printf(const char *input, ...)
{
    int index;
    va_list arg;

    if(!input)
        return (0);
    va_start(arg, input);
    index = 0;
    while (*input)
    {
        if (*input == '%' && ft_strchr("xXcspudi%", *(input + 1)))
            {
                input++;
                index += ft_check_format(*input, arg);
            }
            else
            {
                write(1, input, 1);
                index++;
            }
            input++;
    }
    va_end(arg);
    return (index);
}

int ft_check_format(char s, va_list argument)
{
    int index;

    index = 0;
    if (s == 'x')
        index = ft_print_low_hex(va_arg(argument, unsigned int));
    else if (s == 'X')
        index = ft_print_up_hex(va_arg(argument, unsigned int));
    else if (s == 'c')
        index = ft_print_char(va_arg(argument, int));
    else if (s == 's')
        index = ft_print_str(va_arg(argument, char *));
    else if (s == 'p')
        index = ft_print_p(va_arg(argument, unsigned long));
    else if (s == 'u')
        index = ft_print_u(va_arg(argument, unsigned int));
    else if (s == 'd' || s == 'i')
        index = ft_print_d(va_arg(argument, int));
    else
    {
        index++;
        write(1, "%", 1);
    }
    return (index);
}
