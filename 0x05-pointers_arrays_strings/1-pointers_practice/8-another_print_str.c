#include <stdio.h>

void print(char *c)
{
	while (*c != '\0')
	{
		printf("%c", *c);
		c++;
	}
	printf("\n");
}

int main(void)
{
	char c[20] = "Yoh wassup";
	print(c);
	return 0;
}
