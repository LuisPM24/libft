int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		if (s1[cont] != s2[cont])
			return (s1[cont] - s2[cont]);
		cont++;
	}
	return (0);
}
