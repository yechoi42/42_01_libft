/*
#include <stdio.h>
#include <stdlib.h>
int		main(void)
{
	char *str;

	str = (char *)malloc(200);
	str = "";
	printf("%ld \n", count_word(str, ' '));
	return (0);
}
*/
/*
#include <stdio.h>
int		main(void)
{
	//char s[500] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ulticies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
	//char c = ' ';
	//unsigned int buff_num = count_buff(s, c);
	char **buff = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	unsigned int i = 0;
	
	while (*buff[i])
	{
		printf("%d ", i);
		printf("%s", buff[i]);
		printf("\n");
		i++;
	}
	return (0);
}
*/