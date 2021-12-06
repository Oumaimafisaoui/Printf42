/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_up_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:44:22 by oufisaou          #+#    #+#             */
/*   Updated: 2021/12/06 21:30:03 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_up_hex(unsigned int up_hex)
{
	int	index;
	char	*res;
	int		counter;

	res = ft_utoa_base(up_hex, 16);
	counter = 0;
	while(res[counter])
	{
		if(res[counter] >= 'a' && res[counter] <= 'f')
			res[counter] = res[counter] - 32;
		counter++;
	}
	index = ft_putstr(res);
	free(res);
	return(index);
}
