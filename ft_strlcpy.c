#include <stdio.h>

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && *(src + i) != '\0')
	{
		printf("%d...%c...%c\n", i, dst[i], src[i]);
		dst[i] = src[i];
		i++;
	}
	*(dst + i) = '\0';
	while (*(src + i) != '\0')
	{
		printf("%d...\n", i);
		i++;
	}
	return (i);
}
