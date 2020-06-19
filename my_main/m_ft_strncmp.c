#include <stdio.h>
int		main(void)
{
	int n;
	char s1[200];
	char s2[200];

	scanf("%s", s1);
	scanf("%s", s2);
	scanf("%d", &n);
	printf("%d\n%d\n", strncmp(s1, s2, n), ft_strncmp(s1, s2, n));
	return (0);
}