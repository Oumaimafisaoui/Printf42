#include "ft_printf.h"
#include <limits.h>

static int	ft_intlen(int n);

static int	ft_intlen(int n)
{
	int	counter;

	counter = 0;
	if (n <= 0)
		++counter;
	while (n != 0)
	{
		++counter;
		n /= 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*s;
	int		l_s;

	nbr = n;
	l_s = ft_intlen(nbr);
	s = malloc(sizeof(char) * (l_s + 1));
	if (s == NULL)
		return (NULL);
	s[l_s--] = '\0';
	if (nbr == 0)
		s[0] = '0';
	else if (nbr < 0)
	{
		nbr *= -1;
		s[0] = '-';
	}
	while (nbr > 0)
	{
		s[l_s--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (s);
}