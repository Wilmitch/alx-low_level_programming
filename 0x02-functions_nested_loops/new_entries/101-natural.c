#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always on success
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			sum++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
