#include <stdio.h>

/**
 * modif_my_char_var - modifies char variable
 *
 * Return: nothing
 */
void modif_my_char_var(char *cc, char ccc)
{
        *cc = 'o';
        ccc = 'l';
	printf("The value of ccc is: %c\n", ccc);
	printf("The address of ccc is: %p\n", &ccc);
	printf("The address of cc is %p\n", cc);
	printf("The value address in cc is: %p\n", &cc);
}
