#include <stdio.h>
int		main(void)
{
	char dest[20] = "abcdefg";
	//char src[10] = "12";
	char dest2[20] = "abcdefg";
	//char src2[10] = "12";

	memcpy(dest + 3, dest, 2);
	printf("%s", dest);
	printf("\n---newline---\n");
	ft_memcpy(dest2 + 3, dest2, 2);
	printf("%s", dest2);
}