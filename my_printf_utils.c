#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int n)
{
	if (!*str)
		return (NULL);
	else if (*str == (char)n)
		return ((char *)str);
	else
		return (ft_strchr(++str, n));
}

int		ft_putstr(const char *str)
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


