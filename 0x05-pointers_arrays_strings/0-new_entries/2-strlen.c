#include <stdio.h>

int _strlen(char *s);

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("The string is %d characters long.\n", len);
	return (0);
}

int _strlen(char *s)
{
	int i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
