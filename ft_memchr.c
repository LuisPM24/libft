void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	cont;

	cont = 0;
	while (cont < n)
	{
		if (*s == c)
			return ((void *)s);
		cont++;
		s++;
	}
	return (NULL);
}
