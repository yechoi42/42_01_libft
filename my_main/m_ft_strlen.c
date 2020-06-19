#include <stdio.h>
int		main(void)
{
	char str[200];

	scanf("%s", str);
	printf("%ld\n%ld\n", strlen(str), ft_strlen(str));
	return (0);
}