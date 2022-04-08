#include "../ft_printf.h"

int	ft_putchar_ap(va_list argu_pointer)
{
	char	tmp;

	tmp = (char)va_arg(argu_pointer, int);// argu_pointer가 포인터이니까?
	write(1, &tmp, 1);
	return (1);//printf 글자 개수 + 하기 위해 1로 반환.
}
