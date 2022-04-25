#include <stdio.h>

int *check_error_return_list(char **av, int *list)
{
    int avIndex;
    int convertInt;
    int listIndex;
    int checkSameNumber;

    avIndex = 1;
    listIndex = 0;
    while (0 != av[avIndex])
    {
		printf("%d 번째 avIndex = %d\n", avIndex, avIndex);
		printf("av[%d] = %s\n", avIndex, av[avIndex]);
        convertInt = ft_atoi(av[avIndex]);
		printf("av[%d] -> atoi -> %d\n", avIndex, convertInt);
        list[listIndex] = convertInt;
		printf("\n");
		avIndex++;
		listIndex++;
    }
    list[listIndex] = '\0';
    return (list);
}

int main(int ac, char **av)
{
    int *list;
    int number = 1;
	int length = 0;
	
	
    return (0);
}