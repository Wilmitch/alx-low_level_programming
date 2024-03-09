#include <stdio.h>

char *_strncat(char *dest, char *src, int n);

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i] && i < n; i++)
	{
		dest[len++] = src[i];
	}
	/**
	while (src[len1] != '\0')
		len1++;
	while (dest[len2] != '\0')
		len2++;
	for (i = len2; n < len1 && i < (len2 + n); i++)
	{
		dest[i] = src[j];
		j++;
	}
	*/
	return (dest);
}
