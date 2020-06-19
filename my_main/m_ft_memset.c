#include <stdio.h>
int		main(void)
{
	char s[200] = "abcdefg";
	char s2[200] = "abcdefg";
	ft_memset(s, '*', 0);
	memset(s2, '*', 0);
	printf("%s", s);
	printf("\n---newline---\n");
	printf("%s", s2);
	return (0);
}