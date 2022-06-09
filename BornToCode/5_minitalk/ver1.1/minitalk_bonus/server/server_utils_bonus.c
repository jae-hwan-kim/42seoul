#include "../minitalk_bonus.h"

void    binary_to_decimal(int signal, char *message, int *index)
{
    if (signal == SIGUSR1)
        *message += 0 << *index;
    else if (signal == SIGUSR2)
        *message += 1 << *index;
    (*index)--;
}

void    send_ack(pid_t client_pid)
{
    if(0 != kill(client_pid, SIGUSR1))
            error_kill();
}

void    display_message(char *message, int *index, pid_t client_pid)
{
    if (0 > *index)
    {
        write(1, message, 1);
        *message = 0;
        *index = 7;
        send_ack(client_pid);
    }
}

void	get_message(int signal, siginfo_t *info, void *context)
{
    (void) info;
    (void) context;
    static char message = 0;
    static int  index = 7;
    pid_t   client_pid;

    client_pid = info->si_pid;
    binary_to_decimal(signal, &message, &index);
    display_message(&message, &index, client_pid);
}

void    catch_signal_from_client(void)
{
    struct sigaction    message_server;

    message_server.sa_sigaction = get_message;
    message_server.sa_flags = SA_SIGINFO;
    sigemptyset(&message_server.sa_mask);
    if (0 != sigaction(SIGUSR1, &message_server, NULL))
        error_sigaction();
    if (0 != sigaction(SIGUSR2, &message_server, NULL))
        error_sigaction();
}
