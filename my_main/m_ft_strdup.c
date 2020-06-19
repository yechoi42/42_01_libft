#include <stdio.h>
#include <string.h>
int		main(void)
{
	printf("%s", strdup(""));
	printf("\n---newline---\n");
	printf("%s", ft_strdup(""));
	return (0);
}