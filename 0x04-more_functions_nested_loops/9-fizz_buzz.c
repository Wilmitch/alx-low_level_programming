#include <stdio.h>

/**
 * main - prints numbers from 1 - 100 followed by new line.
 * but for multiples of 3 print fizz and multiples of 5 print buzz
 * For numbers multiples of both 3 and 5 print FizzBuzz.
 * 
 * Return: 1-100 and Fizz Buzz.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (i);
}
