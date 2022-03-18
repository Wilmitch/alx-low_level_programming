#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success. Error code otherwise
 */

int main(void)
{
	char a;
	char A;
	int n;

	while (n < 52)
	{
		if (n < 26)
		{
			putchar(a);
			a++;
		}
		else
		{
			putchar(A);
			A++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
