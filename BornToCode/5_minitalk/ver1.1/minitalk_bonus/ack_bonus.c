#include "minitalk_bonus.h"

size_t  ack_count = 0;

void    check_ack(size_t size)
{
    extern size_t ack_count;

    if (ack_count == size)
    {
        ft_printf("총 문자 수 : %d\n", ack_count);
        ft_printf("메시지 송신에 성공했습니다.\n");
    }
    else
    {
        ft_printf("메시지를 송신에 실패했습니다.\n");
        exit(1);
    }
}

void	count_ack(int signal, siginfo_t *info, void *context)
{
    extern size_t ack_count;

    (void) info;
    (void) context;
    (void) signal;
    ack_count++;
}