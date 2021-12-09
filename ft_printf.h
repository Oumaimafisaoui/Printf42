#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *input, ...);
int		ft_check_format(char s, va_list arg);
int		ft_print_str(char *s);
int		ft_print_char(int c);
int		ft_print_d(int nb);
char 	*ft_strchr(const char *str, int n);
char	*ft_utoa_base(unsigned long long nb, int base);
char 	*ft_itoa(int n);
size_t 	ft_strlen(const char *str);
char 	*ft_strdup(const char *str);
int		ft_print_u(unsigned int nb);
int		ft_print_p(unsigned long p);
int		ft_print_low_hex(unsigned int low_hex);
int		ft_print_up_hex(unsigned int up_hex);
int		ft_putstr(const char *str);


#endif

