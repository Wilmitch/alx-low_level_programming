#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers, followed by
 * new line, whilst numbers are separated by comma, followed by space.
 * @a: the array
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else if (i == (n - 1))
		{
			printf("%d\n", a[i]);
		}
	}
}
