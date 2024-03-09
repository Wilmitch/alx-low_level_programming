#include <stdio.h>

#define rows 2
#define cols 3

void print_array(int array[rows][cols]);
void input_array(int array[rows][cols]);

int main(void)
{
	int array[rows][cols];
	input_array(array);
	print_array(array);
	return 0;
}

void print_array(int array[rows][cols])
{
	//print the entries to the screen
        for (int i = 0; i < rows; i++)
                for (int j = 0; j < cols; j++)
                        printf("Array[%d][%d] = %d\n", i, j, array[i][j]);
}

void input_array(int array[rows][cols])
{
	//collect array elements from the user
        for (int i = 0; i < rows; i++)
                for (int j = 0; j < cols; j++)
                {
                        printf("array[%d][%d] = ", i, j);
                        scanf("%d", &array[i][j]);
		}
}
