#include <stdio.h>

/**
 * main - program prints the number of arguments passed into it
 * argc: argument count
 * argv: array of pointers to arguments passed into program
 *
 * return: 0 always on success
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
