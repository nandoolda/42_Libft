void	*ft_memmove(void *dst, const void *src, unsigned int n)
{
	unsigned int	i;
	char	temp[n];

	i = 0;
	while (i < n)
	{
		*(temp + i) = *((char *)src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*((char *)dst + i) = *(temp + i);
		i++;
	}
	return dst;
}
