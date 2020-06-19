#include <stdio.h>
int		main(void)
{
	char s[20] = "abcdefghijklmnop";
	char s2[20] = "abcdefghijklmnop";

	bzero(s + 2, 3);
	printf("%s", s);
	printf("\n---newline---\n");
	ft_bzero(s2 + 2, 3);
	printf("%s", s2);
	printf("\n");
	return (0);
}