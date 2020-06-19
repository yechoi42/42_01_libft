#include <stdio.h>
int		main(void)
{
	int i;
	char *str;
	char *str2;

	str = calloc(7, sizeof(char));
	printf("%s", str);
	printf("\n");
	i = 0;
	while (i < 6)
	{
		str[i] = 48 + i;
		i++;
	}
	printf("%s", str);
	printf("\n---newline---\n");
	str2 = ft_calloc(7, sizeof(char));
	printf("%s", str2);
	printf("\n");
	i = 0;
	while (i < 6)
	{
		str2[i] = 48 + i;
		i++;
	}
	printf("%s", str2);
	printf("\n");
	return (0);
}
