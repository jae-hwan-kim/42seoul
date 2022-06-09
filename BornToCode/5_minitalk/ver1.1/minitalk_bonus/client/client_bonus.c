#include "../minitalk_bonus.h"

int main(int ac, char **av)
{
    check_client_ac(ac);
    get_pid(av);
    catch_signal_from_server();
    send_signal(av);
    check_ack(ft_strlen(av[2]));
    return (0);
}