#include <stdio.h>
#include <bsd/string.h>
int		main(void)
{
	//char big[200];
	//char little[200];

	//scanf("%s", big);
	//scanf("%s", little);

	printf("%s ", strnstr("abcde", "a", 3));
	printf("%s", ft_strnstr("abcde", "a", 3));
	return (0);
}