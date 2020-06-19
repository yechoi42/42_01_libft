#include <stdlib.h>
#include <stdio.h>
int		main(void)
{
		char str[200];

		scanf("%s", str);
		printf("%d\n%d\n", ft_atoi(str), atoi(str));
		return (0);
}