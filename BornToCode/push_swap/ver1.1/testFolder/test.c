#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
    int i = 1;
    int i2;

    printf("%d\n", ac);
    while (av[i])
    {
        i2 = strlen(av[i]);
        printf("%d\n", i2);
        if (i2 == 0)
            printf("i2 = 0\n");
        i++;
    }
    return (0);
}