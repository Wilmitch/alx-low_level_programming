#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char s[] = "This IS tHe WaY.";

	printf("%s\n", s);
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		if (isupper(s[i]))
		{
			s[i] = tolower(s[i]);
			printf("%c", s[i]);
		}
		else if (islower(s[i]))
		{
			s[i] = toupper(s[i]);
			printf("%c", s[i]);
		}
		else
			printf("%c", s[i]);
	}
	printf("\n");
	return 0;
}
