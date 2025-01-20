/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalomin <lpalomin@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:29:39 by lpalomin          #+#    #+#             */
/*   Updated: 2025/01/20 11:29:41 by lpalomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	cont;
	size_t	str_len;
	char	*substr;

	cont = 0;
	str_len = 0;
	if (!s)
		return (NULL);
	while (s[str_len])
		str_len++;
	if (start >= str_len)
		return (ft_calloc(1, sizeof(char)));
	if (len > (str_len - start))
		len = str_len - start;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (cont < len && (start + cont) < str_len)
	{
		substr[cont] = s[cont + start];
		cont++;
	}
	substr[cont] = '\0';
	return (substr);
}
