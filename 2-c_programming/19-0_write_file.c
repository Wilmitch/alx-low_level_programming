#include <stdio.h>

int main(void)
{
	FILE *fh_write;
	fh_write = fopen("write.txt", "w");
	if (fh_write == NULL)
	{
		printf("Error opening file!\n");
		return 1;
	}
	else
	{
		int x = 100;
		fprintf(fh_write, "Value of x: %d\n", x);
		fclose(fh_write);
	}
	return 0;
}
