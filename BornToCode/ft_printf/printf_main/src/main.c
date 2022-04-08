#include "ft_printf.h"

int	main(void)
{
//	char	character = 'a'; 
//	char	character2 = 'b'; 
//	char	*string = "TEST";
	char	*num = "123";
	char	*num2 = "334455";
	int		num3 = -40;
	int		num4 = -1;
	int		num5 = -12467;
	int		num6 = 18;
	int		num7 = 19;
	int 	num8 = 20;
//	int	r_pf;
//	int	r_ftpf;

	printf("formatted %%, %p, %p, %x, %x\n", &num[1], num2, num3, num4);
	printf("formatted %%, %x, %x, %x, %x\n", num5, num6, num7, num8);
	ft_printf("formatted %%, %p\n", &num[1]);
	ft_printf("formatted %%, %p\n", num2);
	ft_printf("formatted %%, %x\n", num3);
	ft_printf("formatted %%, %x\n", num4);
	ft_printf("formatted %%, %x\n", num5);
	ft_printf("formatted %%, %x\n", num6);
	ft_printf("formatted %%, %x\n", num7);
	ft_printf("formatted %%, %x\n", num8);
//	printf("printf formtted c - c : %c - %c\n", character, character);
//	ft_printf("ft_printf formtted c - c : %c - %c\n\n", character, character);
//	printf("printf_return : %d\n", r_pf);
//	printf("ft_printf_return : %d\n", r_ftpf);
	return (0);
}
