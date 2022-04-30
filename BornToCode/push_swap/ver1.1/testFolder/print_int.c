#include <unistd.h>

int main(void)
{
    int *b;
    int a = 51;

    b = a;
    write(1, &b, 1);
}