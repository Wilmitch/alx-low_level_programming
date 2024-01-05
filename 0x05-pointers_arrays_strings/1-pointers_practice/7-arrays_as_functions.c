#include <stdio.h>

int sumofelements(int a[], int size)
{
	int i, sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
	}
	return sum;
}

int main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	int size = sizeof(a) / sizeof(a[0]);
	int total = sumofelements(a, size);
	printf("Sum of elements = %d\n", total);
	return 0;
}
