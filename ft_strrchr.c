char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char	*temp;
	char	*c_s;

	i = 0;
	temp = 0;
	c_s = (char *)s;
	while (*(c_s + i) != '\0')
	{
		if(*(c_s + i) == c)
			temp = (c_s + i);
		i++;
	}
	if (c == '\0')
		return (c_s + i);
	return (temp);
}
