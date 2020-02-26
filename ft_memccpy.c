void	*ft_memccpy(void *dst, const void *src, int c, unsigned int n)
{
	unsigned int	i;
	char	*c_dst;
	char	*c_src;

	i = 0;
	c_dst = (char *)dst;
	c_src = (char *)src;
	while (i < n && *(c_src + i) != c)
	{
		*(c_dst + i) = *(c_src + i);
		i++;
	}
	if (i == n)
		return 0;
	else
	{
		*(c_dst + i) = *(c_src + i);
		i++;
		return ((void *)(c_dst + i));
	}
}
