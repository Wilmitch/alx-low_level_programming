#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by new line
 * @n: The given number to start from.
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
		printf("%d", n);
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98");
	}
	printf("\n");
}
