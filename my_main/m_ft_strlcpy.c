
#include <stdio.h>
#include <bsd/string.h>
int		main(void)
{
	char dst[15] = "rrrrrr";
	char dst2[15] = "rrrrrr";
	char src[] = "lorem ipsum dolor sit amet";
	//char dup_dst[15];
	//char dup_src[];
	//size_t size = 0;

	//scanf("%s", dst);
	//scanf("%s", src);
	//dup_dst = dst;
	//dup_src = src;

	printf("%ld %s", strlcpy(dst, src, 0), dst);
	printf("\n---newline---\n");
	printf("%ld %s", ft_strlcpy(dst2, src, 0), dst2);
	return (0);
}