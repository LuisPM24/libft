char	*ft_strnstr(const char *big, const char *little, size_t len);
{
	size_t	cont1;
	size_t	cont2;

	if (*little == '\0')
		return ((char *)big);
	cont1 = 0;
	while (big[cont1] != '\0' && cont1 < len)
	{
		cont2 = 0;
		if (big[cont1] == little[cont2])
		{
			while (big[cont1 + cont2] == little[cont2] && (cont1 + cont2) < len)
			{
				cont2++;
				if (little[cont2] == '\0')
					return ((char *)(big + cont1));
			}
		}
		cont1++;
	}
	return (NULL);
}
