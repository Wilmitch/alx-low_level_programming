#include "main.h"

/**
 * rev_array - reverses the contents of an array of integers
 * @a: an array of integers
 * @n: number of array elements
 * return: void
 */
void reverse_array(int *a, int n)
{
	int start, end, tmp;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		tmp = a[end];
		a[end] = a[start];
		a[start] = tmp;
		start++;
		end--;
	}
}
