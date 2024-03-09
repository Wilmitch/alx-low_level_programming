#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int array[2][3] = {1,2,3,4,5,6};
	printf("Array[1][1] = %d\n", array[1][1]);
	//print array elements
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			printf("Array[%d][%d] = %d\n", i, j, array[i][j]);
	return 0;
}
