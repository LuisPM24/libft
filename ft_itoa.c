char	*write_number(int n, char *str, int is_ngtv)
{
	int		n_aux;
	size_t	len;

	n_aux = n;
	len = 0;
	while (n_aux)
	{
		n_aux /= 10;
		len++;
	}
	str = (char *)malloc(len + is_ngtv + 1);
	if (!str)
		return (NULL);
	str[len + is_ngtv] = '\0';
	n_aux = n;
	if (is_ngtv)
	{
		str[0] = '-';
		n_aux *= -1;
	}
	while (len > 0)
	{
		str[len + is_ngtv - 1] = (n_aux % 10) + '0';
		n_aux /= 10;
		len--;
	}
	return (str);
}

char *ft_itoa(int n)
{
	char	*str;
	int		cont;

	cont = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			str = ft_strdup("-2147483648");
		else
			//return negative number
	}
	else if (n > 0)
		if (n == 2147483647)
			str = ft_strdup("2147483647");
		else
			//return positive number
	else
		str = ft_strdup("0");
	return (str);
}
