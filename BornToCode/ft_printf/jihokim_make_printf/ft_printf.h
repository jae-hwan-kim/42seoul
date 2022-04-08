#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
int	ft_putchar_ap(va_list ap);
int	ft_putstr_ap(va_list ap);

#endif
