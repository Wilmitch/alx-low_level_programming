#include <stdio.h>

#define rows 2
#define cols 3

int main(void)
{
	int array[rows][cols];
	//collect array elements from the user
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
		{
			printf("array[%d][%d] = ", i, j);
			scanf("%d", &array[i][j]);
		}
	//print the entries to the screen
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			printf("Array[%d][%d] = %d\n", i, j, array[i][j]);
	return 0;
}
