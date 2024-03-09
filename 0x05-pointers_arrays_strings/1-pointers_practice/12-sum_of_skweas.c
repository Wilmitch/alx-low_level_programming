#include <stdio.h>

int square(int x);
int squareofsum(int x, int y);
int main(void)
{
	int a = 4, b = 8;
	printf("%d\n", squareofsum(a, b));
	return 0;
}

int square(int x)
{
	return (x * x);
}

int squareofsum(int x, int y)
{
	return (square(x + y));
}
