#include <stdio.h>
#include <unistd.h>

int main(void)
{
    printf("ddd\n");
    write(1, "write", 5);
    printf("sss\n");
    return (0);
}