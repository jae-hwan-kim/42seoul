#include "../minitalk.h"

// generate_signal.sa_sigaction = handler;
// generate_signal.sa_flags = SA_SIGINFO;
//예외 조건 필요 ac 개수, 해당 pid 없을 때.
// if (ac < 3)
// {
//     printf("Usage : %s PID \n", av[0]);
// }
// else
//     printf("No Usage PID \n");

// void	handler(int signo, siginfo_t *info, void *context)
// {
//     (void) signo;
//     (void) info;
//     (void) context;
// }
void    send_signal(char **av)
{
    int     index;

    index = 0;
    while (0 != av[2][index])
    {
        decimal_to_binary(av, av[2][index]);
        index++;   
    }
}

int main(int ac, char **av)
{
    if (3 != ac)
    {
        ft_printf("실행 방법\n[ ./client PID \"메시지\" ]으로 입력하세요.\n");
        exit(1);
    }
    get_pid(av);
    send_signal(av);
    return (0);
}
// printf("시간: %02d.%06d\n", lt->tm_sec, tv.tv_usec);
// 잘받았다는 신호 받고 넘어가면 좋을 듯.
// 첫번째 시그널만 보내고 pause를 하고 있다가, 서버에서 반응오면
// generate_signal이 동작하도록 해야할듯?
// pause();
// if (sigaction(SIGUSR1, &generate_signal, NULL) != 0)
//     exit(1);