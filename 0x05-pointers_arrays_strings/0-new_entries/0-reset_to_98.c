#include <stdio.h>

void reset_to_98(int *n);
/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	n = 402;
	printf("n = %d\n", n);
	reset_to_98(&n);
	printf("n is now = %d\n", n);
	return 0;
}

void reset_to_98(int *n)
{
	*n = 98;
}
