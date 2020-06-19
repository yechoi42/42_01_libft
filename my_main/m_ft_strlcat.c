#include <stdio.h>
#include <string.h>

extern unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char a[20] = "hello my name is ";
	char b[10] = "yeji";
	char c[20] = "hello my name is ";
	char d[10] = "yeji";
	
	char e[20] = "hello my name is ";
	char f[10] = "";
	char g[20] = "hello my name is ";
	char h[10] = "";

	printf("1번이 strlcat의 결과, 2번이 ft_strlcat의 결과\n");
	printf("1 %u\n2 %u\n", strlcat(b, a, 6), ft_strlcat(d, c, 6));
	printf("1 %u\n2 %u\n", strlcat(f, e, 0), ft_strlcat(h, g, 0));
	printf("%s \n%s\n", a, c);
	printf("%s \n%s\n", e, g);
}