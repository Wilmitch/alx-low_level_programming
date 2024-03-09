#include <stdio.h>

void puts2(char *str);

int main(void)
{
	char *str;

	str = "0123456789";
	puts2(str);
	return (0);
}

void puts2(char *str)
{
	int i = 0;
	while (*(str + i) != '\0')
	{
		printf("%c", *(str + i));
		i += 2;
	}
	printf("\n");
}
