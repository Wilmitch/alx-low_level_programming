#include <stdio.h>

char *_strpbrk(char *s, char *accept);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
	/**

	while (s[i] != '\0')
	{
		//j = s[i];
		while (accept[k] != '\0')
		{
			if (s[i] == accept[k])
				return (s);
			k++;
		}
		i++;
	}
	*/

