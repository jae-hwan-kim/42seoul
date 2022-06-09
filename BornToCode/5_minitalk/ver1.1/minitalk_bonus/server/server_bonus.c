#include "../minitalk_bonus.h"

int main(int ac, char **av)
{
    check_server_ac(ac);
    get_pid(av);
    catch_signal_from_client();
    while (1);
    return (0);
}