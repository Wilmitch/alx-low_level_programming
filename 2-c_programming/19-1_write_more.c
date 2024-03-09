#include <stdio.h>

int main(void)
{
	FILE *fh_write;
	fh_write = fopen("write.txt", "a");
	if (fh_write == NULL)
	{
		printf("Error opening file\n");
		return 1;
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			fprintf(fh_write, "%d\n", i + 2);
		}
		fclose(fh_write);
	}
	return 0;
}
