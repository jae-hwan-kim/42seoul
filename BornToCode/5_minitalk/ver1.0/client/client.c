#include "../minitalk.h"
#include <time.h>
#include <sys/time.h>
// time_t t;
    // struct tm *lt;
    // struct timeval tv;

    // if((t = gettimeofday(&tv, NULL)) == -1) {
    //     perror("gettimeofday() call error");
    //     return -1;
    // }

    // if((lt = localtime(&tv.tv_sec)) == NULL) {
    //     perror("localtime() call error");
    //     return -1;
    // }
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
void    get_pid(char **av)
{
    pid_t   pid;
    
    pid = getpid();
    printf("Program : %s\nPID [%d]\n", av[0], pid);
}

int main(int ac, char **av)
{
    (void) ac;
    int     index;
    int     shift;
    int     value;
    
    get_pid(av);
    index = 0;
    while (0 != av[2][index])
    {
        // decimal_to_binary
        shift = 7;
        while (0 <= shift)
        {
            value = av[2][index] >> shift;
            if ((value & 1) == 0)
                kill(atoi(av[1]), SIGUSR1);
            else if ((value & 1) == 1)
                kill(atoi(av[1]), SIGUSR2);
            shift--;
            usleep(1000);   
        }
        index++;   
    }
    return (0);
}
// printf("시간: %02d.%06d\n", lt->tm_sec, tv.tv_usec);
// 잘받았다는 신호 받고 넘어가면 좋을 듯.
// 첫번째 시그널만 보내고 pause를 하고 있다가, 서버에서 반응오면
// generate_signal이 동작하도록 해야할듯?
// pause();
// if (sigaction(SIGUSR1, &generate_signal, NULL) != 0)
//     exit(1);