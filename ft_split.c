#include <stdlib.h>

int	count_words(char const *s, char c)
{
	size_t	cont;
	size_t	words;
	int		in_word;

	cont = 0;
	words = 0;
	in_word = 0;
	while (s[cont])
	{
		if (s[cont] != c && !in_word)
		{
			in_word = 1;
			words++;
		}
		else if (s[cont] == c)
			in_word = 0;
		cont++;
	}
	return (words);
}

char	*ft_strdup(const char *s)
{
	size_t	size;
	size_t	cont;
	char	*str_cpy;

	size = 0;
	cont = 0;
	while (s[size] != '\0')
		size++;
	str_cpy = malloc(size + 1);
	if (str_cpy == NULL)
		return (NULL);
	while (cont < size)
	{
		str_cpy[cont] = s[cont];
		cont++;
	}
	str_cpy[cont] = '\0';
	return (str_cpy);
}

int	add_word(char const **s, char c, char **str_group, size_t *cont)
{
	const char	*start;
	size_t		len;
	size_t		cont2;

	cont2 = 0;
	while (**s == c)
		(*s)++;
	if (**s == '\0')
		return (1);
	start = *s;
	while (**s && **s != c)
		(*s)++;
	len = *s - start;
	str_group[*cont] = malloc(len + 1);
	if (!str_group[*cont])
		return (0);
	while (cont2 < len)
	{
		str_group[*cont][cont2] = start[cont2];
		cont2++;
	}
	str_group[*cont][len] = '\0';
	(*cont)++;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**str_group;
	size_t	cont;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	str_group = malloc((words + 1) * sizeof(char *));
	if (!str_group)
		return (NULL);
	cont = 0;
	while (*s)
	{
		if (*s != c && !add_word(&s, c, str_group, &cont))
		{
			while (cont--)
				free(str_group[cont]);
			free(str_group);
			return (NULL);
		}
		else if (*s)
			s++;
	}
	str_group[words] = NULL;
	return (str_group);
}
