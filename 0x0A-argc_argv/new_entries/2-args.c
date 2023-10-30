#include <stdio.h>

/**
 * main - program prints all arguments it receives including first one.
 * argc: argument count
 * argv: array of pointers to arguments passed into program
 *
 * Return: 0 always on success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
