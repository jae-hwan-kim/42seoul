#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
    int i = 3;
    
    if (i-- > 1 || i-- == 2)
        printf("%d\n", i);
    return (0);
}