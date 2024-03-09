#include <stdio.h>

int main(void)
{
	FILE *fh_write;

	fh_write = fopen("write.txt", "w");
	if (fh_write == NULL)
	{
		printf("Error opening file\n");
		return 1;
	}
	else
	{
		fprintf(fh_write, "Hello, world!");
		fclose(fh_write);
	}
	return 0;
}
