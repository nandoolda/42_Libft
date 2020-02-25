void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	unsigned int	i;
	char	*c_src;
	
	i = 0;
	c_src = (char *)src;
	while (i < n && *(c_src + i) != '\0')
	{
		*((char *)dst) = *(c_src + i);
	}
	return (dst);
}
