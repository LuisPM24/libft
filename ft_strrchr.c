char	*ft_strrchr(const char *s, int c)
{
	char	*aux;

	aux = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			aux = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (aux);
}
