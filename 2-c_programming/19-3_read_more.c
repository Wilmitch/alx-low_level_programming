#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fh_read;
	fh_read = fopen("write.txt", "r");
	if (fh_read == NULL)
	{
		printf("The file could not be found\n");
		return 1;
	}
	else
	{
		char buffer[100];
		int array[10];
		int i, num_lines, total;
		while (fgets(buffer, 100, fh_read) != NULL)
		{
			printf("%s", buffer);
			array[i] = atoi(buffer);
			i++;
		}
		fclose(fh_read);
		num_lines = i;

		for (i = 0; i < num_lines; i++)
		{
			printf("Array[%d] = %d\n", i, array[i]);
			total += array[i];
		}
		printf("Average = %d\n", total / num_lines);
	}
	return 0;
}
