#include <stdio.h>
/**
 * main - main entry point
 * prints hello user name to the screen
 * return: void
 */
int main(void)
{
	char name = scanf("What's your name? ");

	printf("Hello, %c.\n", name);
}
