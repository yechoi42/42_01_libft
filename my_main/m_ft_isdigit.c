#include <ctype.h>
#include <stdio.h>
int		main(void)
{
		int c;
		scanf("%d", &c);
		printf("%d\n%d\n", ft_isdigit(c), isdigit(c));
		return (0);
}