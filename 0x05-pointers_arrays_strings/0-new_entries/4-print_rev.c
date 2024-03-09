#include <stdio.h>

void print_rev(char *str);

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	return (0);
}

void print_rev(char *str)
{
	int i = 0, len;
	while (*(str + i) != '\0')
	{
		i++;
	}
	len = i;
	for (i = len; i >= 0; i--)
	{
		printf("%c", *(str + i));
	}
	printf("\n");
}
