#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

void    f(int signum)
{

    printf("Received a USR1\n");
    exit(0);
}

void    g(int signum)
{
    printf("Received a USR2\n");
    exit(0);
}

int main(void)
{
    void    f(int);
    void    g(int);
    int     i;

    signal(SIGUSR1, f);
    signal(SIGUSR2, g);
    i = 0;
    while(++i)
    {
        printf("%dsec\n", i);
        sleep(1);
    }
}