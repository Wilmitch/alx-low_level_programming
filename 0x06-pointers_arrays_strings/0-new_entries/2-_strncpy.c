#include <stdio.h>

char *_strncpy(char *dest, char *src, int n);

int main(void)
{
    char s1[98];
    char *ptr;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}


char *_strncpy(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0, i = 0, j = 0;

	while (src[i] != '\0')
		len1++;
	while (dest[j++])
		len2++;
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < len2; i++)
		dest[i];
	return (dest);
}

