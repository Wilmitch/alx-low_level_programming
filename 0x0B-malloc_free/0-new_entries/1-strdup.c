#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str);

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}

char *_strdup(char *str)
{
	char *p;
	int i = 0, size;

	while (str[i] != '\0')
		i++;
	if (i == 0)
		return (NULL);
	else
		size = i;
	p = (char *) malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		p[i] = str[i];
	}
	p[size] = '\0';
	return (p);
}
