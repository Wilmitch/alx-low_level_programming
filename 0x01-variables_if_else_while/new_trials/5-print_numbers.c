#include <stdio.h>

/**
 * main - entry point
 * this program prints all single digit numbers of base 10
 * starting from 0 followed by new line.
 * Return: 0 always on success.
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		printf("%d", x);
	printf("\n");
	return (0);
}
