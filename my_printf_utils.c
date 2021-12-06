/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 20:08:20 by oufisaou          #+#    #+#             */
/*   Updated: 2021/12/06 21:36:38 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	index;

	index = -1;
	while (s[index] != '\0')
		index++;
	return (index);
}

char	*ft_strchr(const char *str, int n)
{
	int	l_str;

	l_str = ft_strlen(str);
	while (l_str >= 0)
	{
		if (*str == (char)n)
			return ((char *)str);
		str++;
		l_str--;
	}
	return (NULL);
}

int		ft_putstr(char *str)
{
	int	index;

	index = 0;
	while(str[index])
	{
		write(1, &str[index], 1);
		index++;
	}
	return (index);
}

char	*ft_strdup(const char *str)
{
	int	index;
	char *dest;

	dest= malloc(ft_strlen(str) + 1);
	if(!dest)
		return (NULL);
	index = 0;
	while(str[index])
	{
		dest[index] = str[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}


