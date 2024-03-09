#include <stdio.h>

int main(void)
{
	char buffer[100];
	printf("Enter string: ");
	fgets(buffer, 100, stdin);
	printf("%s\n", buffer);
	return 0;
}
