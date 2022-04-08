#include "ft_printf.h"

int	ft_check_type(char argu, va_list argu_pointer)
{
	if (!argu || !argu_pointer)
		return (0);
	else if (argu == 'c')
		return (ft_putchar_ap(argu_pointer));
	else if (argu == 's')
		return (ft_putstr_ap(argu_pointer));
/*
	else if (argu == 'p')
		ft_putptr_fd(argu_char, 1);
	else if (argu == 'd')
		ft_putint_fd(argu_char, 1);
	else if (argu == 'i')
		ft_putint_base_fd(argu_char, 1);
	else if (argu == 'u')
		ft_putint_unsigned_fd(argu_char, 1);
	else if (argu == 'x')
		ft_puthex_lower_fd(argu_char, 1);
	else if (argu == 'X')
		ft_puthex_upper_fd(argu_char, 1);
	else if (argu == '%')
		ft_putpercent_fd(argu_char, 1);
*/
	return (0);
}

int	ft_printf(const char *argu, ... )
{
	int		ret_printf;
	va_list	argu_pointer;

	//va_list 가변 인자 목록. 가변 인자의 메모리 주소를 저장
	//va_start(argu_pointer, argu_num) 가변 인자를 가져올 수 있도록 포인터 설정
	//va_arg(argu_pointer, type); 가변 인자 포인터에서 특정 자료형 크기만큼 값을 가져옴. 실행할 때마다 자료형 크기만큼 순방향 이동한다.
	//va_copy(argu_pointer_copy, argu_pointer);
	//va_end(argu_pointer); 가변 인자 처리가 끝났을 때 포인터를 NULL로 초기화 
	ret_printf = 0;
	if (!argu)
		return (0);
	va_start (argu_pointer, argu);
	while (*argu)
	{
		if (*argu != '%')
		{
			ft_putchar(*argu);
			ret_printf++;
		}
		else
		{
			argu++;
			ret_printf += ft_check_type(*argu, argu_pointer);
		}
		argu++;
	}
	return (ret_printf);
}

int	main(void)
{
//	int				integer = -123;	//d, i, x, p
	char			character = 'A'; //c
	char			*string = "TESTESTES";	//s
	//	unsigned int	unsigned_integer = 1234; //u, X
	int				ret_printf;
	int				ret_ft_printf;
	// 포맷이 없는 인자
/*	ret_printf = printf("Non_formatted\n");
	ret_ft_printf = ft_printf("Non_formatted\n");
	printf("printf : Non_formatted\n");
	ft_printf("ft_printf : Non_formatted\n");
	printf("printf return : %d\n", ret_printf);
	printf("ft_printf return : %d\n", ret_ft_printf);
//	ft_printf("ft_printf return : %d\n", ret_ft_printf);

// 포맷 형식 c 테스트
	ret_printf = printf("formatted c\n");
	ret_ft_printf = ft_printf("formatted c\n");
	printf("printf : form%ctted c : %c\n", character, character);
	ft_printf("ft_printf : form%ctted c : %c\n", character, character);
	printf("printf return : %d", ret_printf);
	printf("ft_printf return : %d", ret_ft_printf);
//	ft_printf("ft_printf return : %d", ret_ft_printf);
*/
// 포맷 형식 s 테스트
	ret_printf = printf("formatted s\n");
	ret_ft_printf = ft_printf("formatted s\n");
	printf("printf : formtted c with s : %c - %s\n", character, string);
	ft_printf("ft_printf : formtted s : %c - %s\n", character, string);
	printf("printf return : %d", ret_printf);
	printf("ft_printf return : %d", ret_ft_printf);
	return (0);
}
