void *ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	i;
	char	*char_s;

	i = 0;
	char_s = (char *)s;
	while (i <= n)
	{
		*(char_s + i) = c;
		i++;
	}
	return (s);
}
