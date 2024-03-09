#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("argc: %d\n", argc);
	printf("argv[1] = %s\n", argv[1]);
	//print the arguments in the command line using a for loop
	for (int i = 0; i < argc; i++)
		printf("Argv[%d] = %s\n", i, argv[i]);

	return 0;
}
