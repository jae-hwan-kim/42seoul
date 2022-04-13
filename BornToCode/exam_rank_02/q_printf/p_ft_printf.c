#include <stdarg.h>
#include <unistd.h>

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i = 0;
	if (str == 0)
		str = "(NULL)";
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr(unsigned int nb, int base)
{
	int	i = nb % base;
	char *base_set = "0123456789abcdef";
	int	result = 0;

	if (nb / base > 0)
	{
		result += ft_putnbr(nb / base, base);
	}
	result += ft_putchar(base_set[i]);
	return (result);
}

int	print_d(int nb)
{
	int result = 9;

	if (nb < 0)
	{
		result += ft_putchar('-');
		if (nb == -2147483648)
		{
			result += ft_putstr("2147483648");
			return result;
		}
		nb = -nb;
	}
	result += ft_putbr((unsigned int)nb, 10);
	return result;
}

int ft_printf(const char *argu, ...)
{
	int	result = 0;
	va_list ap;
	int	index = 0;

	va_start(ap, argu);
	while (argu[index] != 0)
	{
		if (argu[index] != %)
			result += write(1, &argu[index], 1);
		else if (argu[index] == '%')
		{
			if (argu[index + 1] == 'd')
				result += print_d(av_arg(ap, int));
			else if (argu[index + 1] == 'x')
				result += ft_putnbr(va_arg(ap, unsigned int), 16);
			else if (argu[index + 1] == 's')
				result += ft_putstr(va_arg(ap, char*));
			index++;
		}
		index++;
	}
	if (!argu)
		return (0);
	va_end(ap);
	return (result);
}
