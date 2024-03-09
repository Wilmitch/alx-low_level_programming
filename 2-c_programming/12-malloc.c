#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *a;
	a = malloc(sizeof(int) * 5);
	a[0] = 1;
	a[1] = 5;
	a[2] = 9;
	a[3] = 7;
	a[4] = 11;

	for (int i = 0; i < 5; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	free(a);
	return 0;
}
