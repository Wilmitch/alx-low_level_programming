#include <stdio.h>

char *cap_string(char *s);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}

char *cap_string(char *s)
{
	int i = 0;
	while (*(s + i) != '\0')
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
		       i++;
		if (s[i - 1] == ' ' || 
			s[i - 1] == '\t' || 
			s[i - 1] == '\n' || 
			s[i - 1] == ',' ||
			s[i - 1] == ';' ||
			s[i - 1] == '.' ||
			s[i - 1] == '!' ||
			s[i - 1] == '?' ||
			s[i - 1] == '"' ||
			s[i - 1] == '(' || 
			s[i - 1] == ')' ||
			s[i - 1] == '{' ||
			s[i - 1] == '}')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
