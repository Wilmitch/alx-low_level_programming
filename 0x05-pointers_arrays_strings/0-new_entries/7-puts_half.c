#include <stdio.h>

void puts_half(char *str);

int main(void)
{
	char *str;

	str = "0123456789";
	puts_half(str);
	return (0);
}

void puts_half(char *str)
{
	int len = 0, n, i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	len = i;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	for (i = n; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
