#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *array_range(int min, int max);

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}

int *array_range(int min, int max)
{
	int *p, n;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	p = malloc(sizeof(*p) * n);
	if (p == NULL)
		return (NULL);
	while (n--)
		p[n] = max--;
	return (p);
}
