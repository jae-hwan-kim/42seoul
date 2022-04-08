#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char dest[2] = "cc";
	char src[4] = "abcde";

	strcpy(dest, src);

	printf("dest = %s\n", dest);
//	printf("%c\n", dest[20]);
	return (0);
//ft_strcat 채점할 때 기계는 기본적으로 dest의 크기가 엄청 큰건가?)
}
