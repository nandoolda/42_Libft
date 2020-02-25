#include <stdio.h>

void	*ft_memset(void *s, int c, unsigned int n);
void	ft_bzero(void *b, unsigned int n);
unsigned int	ft_strlen(const char *s);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size);

int	main()
{
	char	dst[6];
	int i = 0;

	while (i < 5)
	{
		printf("%d %d %d\n", i, dst + i, *(dst + i));
		i++;
	}
	i = 0;
	ft_bzero(dst, 5);
	printf("a%sa\n", dst);
	while (i < 5)
	{
		printf("%d %d %d\n", i , dst + i, *(dst + i));
		i++;
	}
}
