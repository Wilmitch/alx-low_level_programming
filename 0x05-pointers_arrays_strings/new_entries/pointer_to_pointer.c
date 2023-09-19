#include <stdio.h>

/**
 * main - pointer to address
 *
 * Return: 0 always
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("The address of 'n' is: %p\n", &n);
	printf("The address of 'p' is: %p\n", p);
	*p = 402;
	printf("The value of 'n' is: %d\n", n);
	return (0);
}
