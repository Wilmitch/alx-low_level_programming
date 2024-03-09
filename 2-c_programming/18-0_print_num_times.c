#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc == 3)
	{
		int num_times = atoi(argv[2]);

		for (int i = 0; i < num_times; i++)
			printf("%s\n", argv[1]);
	}
	else
	{
		printf("Error! only two arguments expected!\n");
		printf("1st - String to print out\n");
		printf("2nd - Number of times the string will be printed\n");
		return 1;
	}
	return 0;
}
