#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int i2;
	long int i3;
	char c;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(i2));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(i3));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
