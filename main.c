#include <stdio.h>

unsigned int	ft_strlen(const char *s);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size);

int	main()
{
	const char *s;
	char	*dst;

	dst = "aaaaaaaaaaaaaaa";
	s = "Hello 42!";
	printf("%d  %s\n", ft_strlcpy(dst, s, 5), dst);
}
