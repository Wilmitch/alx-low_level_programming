#include <stdio.h>

char *_strchr(char *s, char c);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}

char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = s[i];
		if (j == c)
			return (s + i);
		if (j == 0)
			return (NULL);
		i++;
	}
}
