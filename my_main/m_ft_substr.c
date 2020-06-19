#include <stdio.h>
int		main(void)
{
	char s[30] = "abcdefghijklmnopqrstuvwxyz";

	printf("%s", ft_substr(s, 22, 7));
	printf("\n");
	return (0);
}