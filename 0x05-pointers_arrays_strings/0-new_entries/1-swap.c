#include <stdio.h>
/**
 * main - checks the code
 *
 * return: 0 always
 */

/**
 * swap_int - swaps the values of two integers
 *
 * return: void
 */

void swap_int(int *a, int *b);

int main(void)
{
	int a = 98, b = 42;

	printf("a = %d, b = %d\n", a, b);
	swap_int(&a, &b);
	printf("a is now = %d, b is now = %d\n", a, b);
	return 0;
}

void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
