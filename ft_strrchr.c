/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalomin <lpalomin@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:29:08 by lpalomin          #+#    #+#             */
/*   Updated: 2025/01/20 11:29:10 by lpalomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;

	aux = NULL;
	while (*s)
	{
		if (*s == (char)c)
			aux = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (aux);
}
