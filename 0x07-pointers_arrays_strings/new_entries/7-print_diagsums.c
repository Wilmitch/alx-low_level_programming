#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of two diagonals of
 * a square matrix of integers
 * @a: the square matrix from which we print sum of diagonals
 * @size: size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum, sum1;
	
	sum = 0;
	sum1 = 0;
	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum, sum1);
}
