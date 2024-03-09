#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fh_read;

	fh_read = fopen("write.txt", "r");
	if (fh_read == NULL)
	{
		printf("Error reading file\n");
		return 1;
	}
	else
	{
		char buffer[100];
		while (fgets(buffer, 100, fh_read) != NULL)
		{
			printf("%s", buffer);
		}
		fclose(fh_read);
	}
	return 0;
}
