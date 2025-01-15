/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalomin <lpalomin@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:28:38 by lpalomin          #+#    #+#             */
/*   Updated: 2025/01/15 15:28:41 by lpalomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t				cont;
	unsigned char		*ptr;
	const unsigned char	*str;

	ptr = (unsigned char *)dst;
	str = (const unsigned char *)src;
	cont = 0;
	if (size == 0)
	{
		while (str[cont] != '\0')
			cont++;
		return (cont);
	}
	while (str[cont] != '\0' && cont < size - 1)
	{
		ptr[cont] = str[cont];
		cont++;
	}
	ptr[cont] = '\0';
	while (str[cont] != '\0')
		cont++;
	return (cont);
}
