#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char dest[7] = "aabbb";
	char src[5] = "ccdd";

	strncat(dest, src, 1);

	printf("dest = %s\n", dest);
	printf("dest[4] = %c\n", dest[4]);
	printf("dest[5] = %c\n", dest[5]);
	printf("dest[6] = %c\n", dest[6]);
	printf("dest[7] = %c\n", dest[7]);
	printf("dest[8] = %c\n", dest[8]);
	printf("dest[9] = %c\n", dest[9]);
//	printf("%c\n", dest[20]);
	return (0);
//ft_strcat 채점할 때 기계는 기본적으로 dest의 크기가 엄청 큰건가?)
}
