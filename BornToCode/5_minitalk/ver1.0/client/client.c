#include "../minitalk.h"

void    get_pid(char **av)
{
    pid_t   pid;
    
    pid = getpid();
    printf("Program : %s\nPID [%d]\n", av[0], pid);
}

int main(int ac, char **av)
{
    (void) ac;

    //예외 조건 필요 ac 개수, 해당 pid 없을 때.
    // if (ac < 3)
    // {
    //     printf("Usage : %s PID \n", av[0]);
    // }
    // else
    //     printf("No Usage PID \n");
    get_pid(av);
    if (atoi(av[2]) == 0)
        kill(atoi(av[1]), SIGUSR1);
    else if (atoi(av[2]) == 1)
        kill(atoi(av[1]), SIGUSR2);
    // while (1);
    return (0);
}