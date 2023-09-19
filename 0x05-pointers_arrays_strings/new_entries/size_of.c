#include <stdio.h>

/**
 * main - show size of different variables
 *
 * Return: 0 always
 */
int main(void)
{
	int *p;
	int n;

	printf("The size of a char is: %lu bytes\n", sizeof(char));
	printf("The size of an int is: %lu bytes\n", sizeof(int));
	printf("The size of a float is: %lu bytes\n", sizeof(float));
	printf("The size of my variable n is: %lu bytes\n", sizeof(n));
	printf("The size of a pointer is: %lu bytes\n", sizeof(p));
	return (0);
}
