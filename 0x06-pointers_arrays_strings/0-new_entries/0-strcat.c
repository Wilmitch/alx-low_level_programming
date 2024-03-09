#include <stdio.h>

char * _strcat(char *dest, char *src);

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}

char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0, i = 0, j = 0;

	while (src[len1] != '\0')
		len1++;
	while (dest[len2] != '\0')
		len2++;
	for (i = len2; i < (len1 + len2); i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
