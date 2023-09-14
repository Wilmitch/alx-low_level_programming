#include <stdio.h>

/**
 * main - entry point
 * fibonacci: prints the first 50 Fibonacci numbers starting with 1 and 2
 * followed by new line
 * Return: 0 always on success.
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;
	k = 2;
	for (i = 0; i <= 49; i++)
	{
		if (i < 49)
		{
			printf("%ld, ", j);
		}
		else if (i == 49)
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
