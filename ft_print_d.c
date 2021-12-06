/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:34:50 by oufisaou          #+#    #+#             */
/*   Updated: 2021/12/06 21:28:23 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_d(int nb)
{
	int index;
	char *res;

	res = ft_itoa(nb);
	index = ft_putstr(res);
	free(res);
	return (index);
}

