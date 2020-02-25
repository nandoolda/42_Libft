#include <stdio.h>

void *ft_memset(void *s, int c, unsigned int n);
unsigned int	ft_strlen(const char *s);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size);

int	main()
{
	const char *s;
	char	*dst[5];

	ft_memset(dst, 0x41, 5);
	s = "Hello 42!";
	printf("%s\n", dst);
}
