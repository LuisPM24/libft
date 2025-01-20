/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalomin <lpalomin@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:44:31 by lpalomin          #+#    #+#             */
/*   Updated: 2025/01/20 11:44:33 by lpalomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	unsigned int	cont;

	cont = 0;
	while (s[cont] != '\0')
		cont++;
	return (cont);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			cont;
	void			*mem;
	unsigned char	*mem_ini;

	cont = 0;
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	mem_ini = (unsigned char *)mem;
	while (cont < (nmemb * size))
	{
		mem_ini[cont] = 0;
		cont++;
	}
	return (mem);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	cont;
	char	*str;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start >= end)
		return (ft_calloc(1, 1));
	end--;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	str = (char *)malloc(end - start + 2);
	if (!str)
		return (NULL);
	cont = 0;
	while (start + cont <= end)
	{
		str[cont] = s1[start + cont];
		cont++;
	}
	str[cont] = '\0';
	return (str);
}
