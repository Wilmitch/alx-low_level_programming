#include <stdio.h>

/**
 * main - This program prints its name followed by new line
 * argc: argument count
 * argv: array of arguments passed in the program
 *
 * Return: 0 always on success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
