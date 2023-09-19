#include <stdio.h>

/**
 * main - main entry
 *
 * Return: always 0
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';

	printf("The value of c is: %c\n", c);
	printf("The address of c is: %p\n", &c);
	printf("The address stored in p is: %p\n", &p);
	printf("The address of p is: %p\n", p);
	modif_my_char_var(p, c);
	printf("The value of c after modif is: %c\n", c);
	printf("The address of c after modif is: %p\n", &c);
	printf("The address stored in p after modif is: %p\n", &p);
	printf("The address of p after modif is: %p\n", p);
	return (0);
}

