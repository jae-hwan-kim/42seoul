#ifndef MINITALK_H
# define MINITALK_H

#include <unistd.h>
#include <stdlib.h>
#include <sys/signal.h>
#include <signal.h>
#include <stdio.h>

void    get_pid(char **av);
int	    ft_printf(const char *argu, ...);
int     minitalk_atoi(const char *str);

void    send_signal(char **av);
void    send_message(char **av);
void    send_signal_to_server(char **av, int bit);
void    decimal_to_binary(char **av, char character);

void    catch_signal(void);
void	get_message(int signal, siginfo_t *info, void *context);
void    display_message(char *message, int *index);
void    binary_to_decimal(int signal, char *message, int *index);

#endif