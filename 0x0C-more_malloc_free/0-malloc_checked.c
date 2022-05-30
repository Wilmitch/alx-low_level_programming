#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - it allocates memory using malloc
 * @b: size of memory or number of bytes to be allocated
 *
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
