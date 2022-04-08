#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *line;
	char *line2;
//	char *line3;

	printf("배열 선언, 널\n");
	line = "abc";
	printf("%s\n", line);
	printf("%p\n", line);
	line = 0;
	printf("%s\n", line);
	printf("%p\n", line);

	printf("동적할당, 널\n");
	line2 = malloc(4);
	line2 = "def";
	printf("%s\n", line2);
	printf("%p\n", line2);
	line2 = 0;
	printf("%s\n", line2);
	printf("%p\n", line2);
	if (!line2)
		printf("\nline2 은 널입니다.");
	free (line2);
	/*
	printf("동적할당, free\n");
	line3 = malloc(4);
	line3 = "ghi";
	printf("%s\n", line3);
	printf("%p\n", line3);
	free (line3);
	printf("%s\n", line3);
	printf("%p\n", line3);
	*/
	return (0);
}
