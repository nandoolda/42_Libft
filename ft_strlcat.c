unsigned int	ft_strlcat(char *dst, const char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (*(dst + i) != '\0')
		i++;
	if (i > n)
		return i;
	while (i + j < n - 1)
	{
		*(dst + i + j) = *(src + j);
		j++;
	}
	*(dst + i + j) = '\0';
	while (*(src + j) != '\0')
		j++;
	return i + j;
}
