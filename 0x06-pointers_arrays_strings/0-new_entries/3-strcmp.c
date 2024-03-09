#include <stdio.h>

int _strcmp(char *s1, char *s2);

int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);
}

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	while((s1[i] && s2[i]) && (s1[i] == s2[i]))
	{
		s1++;
		s2++;
		i++;
	}
	return (s1[i] - s2[i]);
}
