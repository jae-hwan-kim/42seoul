#include "../minitalk.h"
// if (signo == SIGUSR1)
// {
//     if (write(1, "0", 1))
//         kill(info->si_pid, SIGUSR1);
// }
// else if (signo == SIGUSR2)
// {
//     if(write(1, "1", 1))
//         kill(info->si_pid, SIGUSR2);
// }
// if (ac < 3)
// {
//     printf("Usage : %s PID \n", av[0]);
// }
// else
// {
//     if (atoi(av[2]) == 30)
//         kill(atoi(av[1]), SIGUSR1);
//     else if (atoi(av[2]) == 31)
//         kill(atoi(av[1]), SIGUSR2);
// }
// printf("No Usage PID \n");

void    catch_signal(void)
{
    struct sigaction    message;

    message.sa_sigaction = get_message;
    message.sa_flags = SA_SIGINFO;
    sigemptyset(&message.sa_mask);
    if (0 != sigaction(SIGUSR1, &message, NULL))
    {
        ft_printf("\n메시지 수신에 실패했습니다.\n");
        exit(1);
    }
    if (0 != sigaction(SIGUSR2, &message, NULL) != 0)
    {
        ft_printf("\n메시지 수신에 실패했습니다.\n");
        exit(1);
    }
}

int main(int ac, char **av)
{
    if (1 != ac)
    {
        ft_printf("실행 방법\n[ ./server ] 로 실행하세요.\n");
        exit(1);
    }
    get_pid(av);
    catch_signal();
    while (1);
    return (0);
}