#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	unsigned int	i;
	char	*c_src;
	char	*c_dst;
	
	i = 0;
	c_src = (char *)src;
	c_dst = (char *)dst;
	while (i < n && c_src[i] != '\0')
	{
		printf("%d %c\n", i, c_src[i]);
		c_dst[i] = c_src[i];
		i++;
	}
	return (dst);
}
