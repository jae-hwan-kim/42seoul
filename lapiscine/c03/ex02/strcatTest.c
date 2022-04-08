#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char dest[20] = "aabbb";
	char src[5] = "ccdd";

	strcat(dest, src);

	printf("dest = %s\n", dest);
	printf("dest[4] = %c\n", dest[4]);
	printf("dest[5] = %c\n", dest[5]);
	printf("dest[6] = %c\n", dest[6]);
	printf("dest[7] = %c\n", dest[7]);
	printf("dest[8] = %c\n", dest[8]);
	printf("dest[9] = %c\n", dest[9]);
//	printf("%c\n", dest[20]);
	printf("dest[20] = ");
	write(1, &dest[20], 1);
	write(1, "\n", 1);
	return (0);
}
