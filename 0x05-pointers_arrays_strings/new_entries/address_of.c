#include <stdio.h>

/**
 * main - address of variable
 *
 * Return: 0 always
 */
int main(void)
{
	char c;
	int n;
	int *p;

	printf("The address of char 'c' is: %p\n", &c);
	printf("The address of int 'n' is: %p\n", &n);
	printf("The address of pointer 'p' is: %p\n", p);
	printf("The address of variable 'p' is: %p\n", &p);

	return (0);
}
