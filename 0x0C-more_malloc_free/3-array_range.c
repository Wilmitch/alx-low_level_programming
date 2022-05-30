#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers.
 * @min: smallest integer in the array.
 * @max: largest integerin the array.
 *
 * Return: pointer to newly created array.
 * NULL if malloc fails
 * NULL if min is greater than max.
 */
int *array_range(int min, int max)
{
	int *p, n;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	p = malloc(sizeof(*p) * n);
	if (!p)
		return (NULL);
	while (n--)
		p[n] = max--;
	return (p);
}
