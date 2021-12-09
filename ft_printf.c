/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:10:57 by oufisaou          #+#    #+#             */
/*   Updated: 2021/12/09 22:10:58 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(char s, va_list argument)
{
	int	index;

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
		index = write(1, &s, 1);
	return (index);
}

int	ft_printf(const char *input, ...)
{
	int		index;
	va_list	arg;

	if (!input)
		return (0);
	va_start(arg, input);
	index = 0;
	while (*input)
	{
		if (*input == '%')
		{
			if (ft_strchr("xXcspudi%", *(input + 1)))
				index += ft_check_format(*(input + 1), arg);
			else if (*(input + 1))
				index += write(1, input, 2);
			input++;
		}
		else
			index += write(1, input, 1);
		if (*input)
			input++;
	}
	va_end(arg);
	return (index);
}
