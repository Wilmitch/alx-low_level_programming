#include <stdio.h>

unsigned int _strspn(char *s, char *accept);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, k = 0, count = 0;

	while (s[i] != '\0')
	{
		j = s[i];
		while (accept[k] != '\0')
		{
			if (j == accept[k])
				count++;
			k++;
		}
		i++;
	}
	return (k);
}
