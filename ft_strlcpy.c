unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1 && *(src + i) != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	*(dst + i) = '\0';
	while (*(src + i) != '\0')
	{
		i++;
	}
	return (i);
}
