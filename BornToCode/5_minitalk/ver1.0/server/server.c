#include "../minitalk.h"
// 클라이언트에서 서버에 메시지를 전송한다.
// 이때 인자로 서버 pid 와 메시지를 보낸다.
// ex) ./client [PID] [메시지]

void    get_pid(char **av)
{
    pid_t   pid;
    
    pid = getpid();
    printf("Program : %s\nPID [%d]\n", av[0], pid);
}

void	handler(int signo, siginfo_t *info, void *context)
{
    (void) info;
    (void) context;
    static int  index = 7;

    if (signo == SIGUSR1)
        write(1, "0", 1);
    else if (signo == SIGUSR2)
        write(1, "1", 1);
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
    index--;
    if (0 > index)
    {
        index = 7;
        printf("\n");
    }
}

int main(int ac, char **av)
{
    (void) ac;
    struct sigaction    generate_signal;

    generate_signal.sa_sigaction = handler;
    generate_signal.sa_flags = SA_SIGINFO;
    get_pid(av);
    
    if (sigaction(SIGUSR1, &generate_signal, NULL) != 0)
        exit(1);
    if (sigaction(SIGUSR2, &generate_signal, NULL) != 0)
        exit(1);
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
    while (1);
    return (0);
}