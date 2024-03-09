#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *a;

	a = calloc(5, sizeof(int));
	a[0] = 1;
	a[1] = 5;
	a[2] = 7;
	a[3] = 9;
	a[4] = 11;

	for (int i = 0; i < 5; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}

	free(a);
	return 0;
}
