#include <stdio.h>

void print(char *c)
{
	c[0] = 'A';
	while (*c != '\0')
	{
		printf("%c", *c);
		c++;
	}
	printf("\n");
}

int main(void)
{
	char c[20] = "Hello world!";
	print(c);
	return 0;
}
