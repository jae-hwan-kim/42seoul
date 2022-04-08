#include "../ft_printf.h"

int	ft_putstr_ap(va_list argu_pointer)
{
	size_t	ap_size = 8;
	char	*tmp;

	tmp = va_arg(argu_pointer, char *);//null일 때는 null 반환
	if (!tmp)
		return (0);
//	ap_size = ft_strlen(tmp);
	printf("tetet: [%s]\n", tmp);
	write(1, tmp, ap_size);
	return (ap_size);
}
