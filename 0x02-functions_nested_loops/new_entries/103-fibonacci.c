#include <stdio.h>

/**
 * main - entry point
 * Even liber abbaci: prints the first 50 Fibonacci numbers
 * starting with 1 and 2 and then prints the sum of the
 * even-valued terms followed by new line
 * Return: 0 always on success.
 */
int main(void)
{
	long int i, j, k, next;
	int sum;

	j = 1;
	k = 2;
	sum = 0;
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
		if (k <= 4000000 && k % 2 == 0)
		{
			sum++;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("The sum of even-valued terms is: %d\n", sum);
	return (0);
}
