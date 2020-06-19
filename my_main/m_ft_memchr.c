#include <stdio.h>
int		main(void)
{
	char s[20] = "abcdefghij";
	char s2[20] = "abcdefghij";
	char *temp;
	char *temp2;

	temp = (unsigned char *)memchr(s, 100, 0);
	printf("%s", temp);
	printf("\n---newline---\n");
	temp2 = (unsigned char *)ft_memchr(s, 100, 0);
	printf("%s", temp2);
	printf("\n");
	return (0);
}