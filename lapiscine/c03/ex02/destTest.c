#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char dest[20] = "aabbb";
	
	dest[2] = '\0';
	printf("dest = %s\n", dest);
	printf("dest[0] = %c\n", dest[0]);
	printf("dest[1] = %c\n", dest[1]);
	printf("dest[2] = %c\n", dest[2]);
	printf("dest[3] = %c\n", dest[3]);
	printf("dest[4] = %c\n", dest[4]);
	printf("dest[5] = %c\n", dest[5]);
	printf("dest[6] = %c\n", dest[6]);
	printf("dest[7] = %c\n", dest[7]);
	printf("dest[8] = %c\n", dest[8]);
	printf("dest[9] = %c\n", dest[9]);
	printf("dest[20] = \n");
	write(1, &dest[4], 1);
	return (0);
}
