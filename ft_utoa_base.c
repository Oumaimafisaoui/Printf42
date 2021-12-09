#include "ft_printf.h"

static size_t	len_int(unsigned long long nb, int base);
static char	*len_str(char *s, long l, unsigned long long nb, int base);

char *ft_utoa_base(unsigned long long nb, int base)
{
	unsigned int l;
	char	*res;

	if(nb == 0)
		return (ft_strdup("0"));
	l = len_int(nb, base);
	res = (char *)malloc(sizeof(char) * (l + 1 ));
	if(res == NULL)
		return (NULL);
	return (len_str(res, l, nb, base));	
}

static size_t	len_int(unsigned long long nb, int base)
{
	size_t	index;

	index = 0;
	while(nb)
	{
		index++;
		nb = nb / base;
	}
	return (index);
}

static char	*len_str(char *s, long l, unsigned long long nb, int base)
{
	s[l] = '\0';
	l = l - 1;
	while(nb)
	{
		if(nb % base >= 10)
			s[l] = ((nb % base ) - 10) + 'a';
		else
			s[l] = (nb % base) + 48;
		nb = nb / base;
		l--;
	}
	return (s);
}


