#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2);

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j = 0, size;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (i + j == 0)
		return (NULL);
	else
		size = i + j;

	p = (char *) malloc(sizeof(char) * size);

	i = 0, j = 0;
	while (s1[i] != '\0')
	{
		p[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		p[j] = s2[i];
		i++;
		j++;
	}
	p[size] = '\0';
	return (p);
}
