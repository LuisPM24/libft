char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	cont;
	size_t	str_len;
	size_t	substr_len;
	char	*substr;

	cont = 0;
	if (s == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (malloc(1));
	substr_len = len;
	if (start + len > str_len)
		substr_len = str_len - start;
	substr = (char *)malloc(substr_len);
	if (substr == NULL)
		return (NULL);
	while (cont < substr_len)
	{
		substr[cont] = s[start + cont];
		cont++;
	}
	return (substr);
}
