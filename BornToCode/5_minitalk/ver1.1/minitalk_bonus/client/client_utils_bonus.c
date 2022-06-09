#include "../minitalk_bonus.h"

void    send_signal(char **av)
{
    int     index;
    pid_t   pid;

    index = 0;
    pid = (pid_t)minitalk_atoi(av[1]);
    check_string(av, index);
    while (0 != av[2][index])
    {
        decimal_to_binary(pid, av[2][index]);
        index++;   
    }
}

void    catch_signal_from_server(void)
{
    struct sigaction    message_client;

    message_client.sa_sigaction = count_ack;
    message_client.sa_flags = SA_SIGINFO;
    sigemptyset(&message_client.sa_mask);
    if (0 != sigaction(SIGUSR1, &message_client, NULL))
        error_sigaction();
}

void    send_signal_to_server(pid_t pid, int bit)
{
    if ((bit & 1) == 0)
    {
        if (0 != kill(pid, SIGUSR1))
            error_kill();
    }
    else if ((bit & 1) == 1)
    {
        if (0 != kill(pid, SIGUSR2))
            error_kill();
    }
}

void    decimal_to_binary(pid_t pid, char character)
{
    int     shift;
    int     bit;

    shift = 7;
    while (0 <= shift)
    {
        bit = character >> shift;
        send_signal_to_server(pid, bit);
        shift--;
        usleep(1000);   
    }
}
