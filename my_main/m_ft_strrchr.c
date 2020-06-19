#include <stdio.h>
#include <string.h>
int		main(void)
{
	char s[200];
	int c;

	scanf("%s", s);
	scanf("%d", &c);
	printf("%s", strrchr(s, c));
	printf("\n---newline---\n");
	printf("%s", ft_strrchr(s, c));
	return (0);
}