int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *((char *)s1 + i) == *((char *)s2 + i))
	{
		i++;
	}
	if (i == n)
		i--;
	return (*((char *)s1 + i) - *((char *)s2 + i));
}
