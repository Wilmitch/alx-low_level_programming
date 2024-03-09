#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	printf("Enter size of array\n");
	scanf("%d", &n);
	int *array = malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
		printf("Array[%d] = %d\n", i, array[i]);
	puts("\n");
	free(array);
	return 0;
}
