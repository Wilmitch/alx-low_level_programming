#include <stdio.h>

/**
 * main - entry point
 * Return: 0 on success
 */
int main(void)
{
	printf("Size of a char: %li bytes\n", sizeof(char));
	printf("Size of an int: %li bytes\n", sizeof(int));
	printf("Size of a long int: %li bytes\n", sizeof(long));
	printf("Size of a long long int: %li bytes\n", sizeof(double));
	printf("Size of a float: %li bytes\n", sizeof(float));

	return (0);
}
