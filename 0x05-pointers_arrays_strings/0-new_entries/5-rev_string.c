#include <stdio.h>

void rev_string(char *str);

int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}

void rev_string(char *str)
{
	int i = 0, j = 0, len;
	char tmp;
	while(*(str + i) != '\0')
	{
		i++;
	}
	len = i - 1;
	//Either of the for loop and while loop should work.
	/**
	 * for (j = 0; j < len / 2; j++)
	{
		tmp = *(str + j);
                *(str + j) = *(str + len);
                *(str + len) = tmp;
                len--;
         }
	 */
	 while (j < len / 2)
	 {
		 tmp = *(str + j);
		 *(str + j) = *(str + len);
		 *(str + len) = tmp;
		 j++;
		 len--;
	 }
}
