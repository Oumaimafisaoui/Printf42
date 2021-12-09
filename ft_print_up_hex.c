/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_up_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:10:45 by oufisaou          #+#    #+#             */
/*   Updated: 2021/12/09 22:10:47 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_up_hex(unsigned int up_hex)
{
	int		c;
	char	*res;
	int		index;

	res = ft_utoa_base(up_hex, 16);
	index = 0;
	while (res[index])
	{
		if (res[index] >= 'a' && res[index] <= 'f')
			res[index] = res[index] - 32;
		index++;
	}
	c = ft_putstr(res);
	free(res);
	return (c);
}
