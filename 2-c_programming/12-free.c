#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *numbers;
	int size = 2, input = 0, i = 0;

	numbers = malloc(sizeof(int) * size);
	do
	{
		if (i == size)
		{
			size += 2;
			numbers = realloc(numbers, sizeof(int) * size);
		}
		printf("Enter -1 to quit: ");
		scanf("%d", &input);
		if (input != -1)
		{
			numbers[i] = input;
			i++;
		}
	} while (input != -1);

	int num_elements = i;
	int total = 0;
	for (i = 0; i < num_elements; i++)
	{
		total += numbers[i];
	}
	printf("The average of the entered numbers is: %d\n", total / num_elements);
	
	free(numbers);
	return 0;
}

