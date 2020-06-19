#include <ctype.h>
#include <stdio.h>
int		main(void)
{
		char num;
		
		scanf("%c", &num);
		printf("%c\n", ft_tolower(num));
		printf("%c\n", tolower(num));
		return (0);
}