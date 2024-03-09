#include <stdio.h>

#define rows 3
#define cols 3

int main(void)
{
	int array[rows][cols] = {1,2,3,4,5,6,7,8,9};
	//print the array
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			printf("Array[%d][%d] = %d\n", i, j, array[i][j]);
	return 0;
}
