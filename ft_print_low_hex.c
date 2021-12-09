/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_low_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:09:45 by oufisaou          #+#    #+#             */
/*   Updated: 2021/12/09 22:09:47 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_low_hex(unsigned int low_hex)
{
	int		index;
	char	*res;

	res = ft_utoa_base(low_hex, 16);
	index = ft_putstr(res);
	free(res);
	return (index);
}
