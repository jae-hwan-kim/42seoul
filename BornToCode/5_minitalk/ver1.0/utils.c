#include "minitalk.h"

void    get_pid(char **av)
{
    pid_t   pid;
    
    pid = getpid();
    //ft_printf로 바꿀 것
    ft_printf("Program : %s\n", av[0]);
    ft_printf("PID [%d]\n", pid);
}

int	minitalk_atoi(const char *str)
{
	int			i;
	long long	result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}
