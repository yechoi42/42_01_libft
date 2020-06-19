#include <ctype.h>
#include <stdio.h>
int		main(void)
{
		char c;
		
		scanf("%c", &c);
		printf("%c\n%c\n", ft_toupper(c), toupper(c));
		return (0);
}
