/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:40:54 by oufisaou          #+#    #+#             */
/*   Updated: 2021/12/06 21:29:45 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_low_hex(unsigned int low_hex)
{
	int	index;
	char *res;

	res = ft_utoa_base(low_hex, 16);
	index = ft_putstr(res);
	free(res);
	return (index);
}	
