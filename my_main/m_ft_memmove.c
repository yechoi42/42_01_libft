#include <stdio.h>
int		main(void)
{
	char dest[20] = "1234567890";
	char dest2[20] = "1234567890";

	memmove(dest, dest + 2, 26); 
	printf("copied dest : %s", dest);
	printf("\n---newline---\n");
	ft_memmove(dest2, dest2 + 2, 26);
	printf("copied dest2 : %s", dest2);
	printf("\n");
	return (0);
}
