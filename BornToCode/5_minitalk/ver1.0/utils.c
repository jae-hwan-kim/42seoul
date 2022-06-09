#include "minitalk.h"

void    get_pid(char **av)
{
    pid_t   pid;
    
    pid = getpid();
    ft_printf("Program : %s\n", av[0]);
    ft_printf("PID [%d]\n", pid);
}

int	minitalk_atoi(const char *str)
{
	int			i;
	long long	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			ft_printf("\n메시지 전송에 실패했습니다.\n");
			ft_printf("올바른 PID 를 입력하세요.\n");
			exit(1);
		}
		while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
	}
	return (result);
}
