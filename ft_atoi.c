int	ft_atoi(const char *nptr)
{
	int	sign;
	int	mem;

	sign = 1;
	mem = 0;
	while (*nptr == ' ')
		nptr++;
	while (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr;
	}
	while (*nptr >= 48 && *nptr <= 57)
	{
		mem = (mem * 10) + (*nptr - '0');
		nptr++;
	}
	return (mem * sign);
}
