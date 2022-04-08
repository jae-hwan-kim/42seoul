#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *s1 = "needle in a haystack";
	char *s2 = "ix";
	char *result;

	result = strstr(s1, s2);
	printf("%s\n", result);
}
