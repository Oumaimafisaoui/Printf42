/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:37:45 by oufisaou          #+#    #+#             */
/*   Updated: 2021/12/06 21:28:59 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int nb)
{
	int		 index;
	char	*res;

	res = ft_utoa_base(nb, 10);
	index = ft_putstr(res);
	free(res);
	return (index);
}

