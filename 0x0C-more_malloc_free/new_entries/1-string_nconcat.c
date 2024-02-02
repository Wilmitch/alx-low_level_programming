#include <stdio.h>
#include<stdlib.h>

int _strlen(char *s);
char *string_nconcat(char *s1, char *s2, unsigned int n);

int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int num, len, i, j;
	char *s;

	num = n;
	if (num < 0)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= _strlen(s2))
		num = _strlen(s2);
	len = _strlen(s1) + num + 1;

	s = (char *) malloc(sizeof(*s) * len);
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';
	return (s);
}
