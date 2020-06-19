#include <stdio.h>
int		main(void)
{
	char dest[20] = "abcdefgh";
	char src[20] = "1234";
	char dest2[20] = "abcdefgh";
	char src2[20] = "1234";
	void *temp;
	void *temp2;

	temp= memccpy(dest, src, 100, 15);
	printf("memcpy result : %s", (char *)temp);
	printf("\n");
	printf("copied dest : %s", dest);
	printf("\n---newline---\n");
	temp2 = ft_memccpy(dest2, src2, 100, 15);
	printf("ft_memccpy result :%s", (char *)temp2);
	printf("\n");
	printf("copied dest : %s", dest2);
	printf("\n");
	return (0);
}
