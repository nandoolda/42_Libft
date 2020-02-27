int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *(s1 + i) == *(s2 + i))
	{
		if (*(s1 + i) == '\0')
			break ;
		i++;
	}
	if (i == n)
		i--;
	return (*(s1 + i) - *(s2 + i));
}
