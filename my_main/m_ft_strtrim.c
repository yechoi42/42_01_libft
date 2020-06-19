#include <stdio.h>
int		main(void)
{
	char s1[100] = "   abc			\n  def";
	char set[20] = "\t \n";
	printf("%s", ft_strtrim(s1, set));
	printf("\n");
	return(0);
}