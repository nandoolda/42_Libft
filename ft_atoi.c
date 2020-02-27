int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	int	neg;
	int	num;

	i = 0;
	neg = 1;
	num = 0;
	while ((*(nptr + i) >= 9 && *(nptr + i) <= 13) || *(nptr + i) == 32)
		i++;
	if (*(nptr + i) == '+' || *(nptr + i) == '-')
	{
		i++;
		if (*(nptr + i) == '-')
			neg = -1;
	}
	while (*(nptr + i) >= '0' && *(nptr + i) <= '9')
		num  = num * 10 + *(nptr + i++) - '0';
	if (num == 2147483648 && neg == -1)
		return (-2147483648);
	return (num * neg);
}
