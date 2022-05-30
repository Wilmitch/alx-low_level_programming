#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates the memory for an array, initialized to 0.
 * @nmemb: number of elements in the array.
 * @size: byte size of each element in the array.
 *
 * Return: NULL is size or nmemb == 0.
 * NULL if malloc fails.
 * Pointer to the memory allocated on success.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		p[nmemb] = 0;
	return (p);
}
