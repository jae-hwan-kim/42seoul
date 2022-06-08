#include "server.h"
// 서버 프로그램 : 실행 시 자신의 PID 를 출력하는 서버 프로그램을 만든다.

int main(int ac, char **av)
{
    (void) ac;
    pid_t   pid;

    pid = getpid();
    printf("Program : %s\nPID [%d]\n", av[0], pid);
    // while (1);
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
    return (0);
}