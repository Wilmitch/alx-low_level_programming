#include <stdio.h>

void add_one(int array[], int length);

int main(void)
{
	int a[] = {1, 2, 3, 4, 5};

	add_one(a, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}

void add_one(int array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		array[i] += 1;
	}
}
