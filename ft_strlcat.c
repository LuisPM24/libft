/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalomin <lpalomin@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:10:33 by lpalomin          #+#    #+#             */
/*   Updated: 2025/01/15 16:10:35 by lpalomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	cont;
	size_t	src_size;
	size_t	dst_size;

	src_size = 0;
	while (src[src_len] != '\0')
		src_size++;
	dst_size = 0;
	while (dst[dst_len] != '\0' && dst_len < size)
		dst_size++;
	if (size <= dst_len)
		return (size + src_len);
	cont = 0;
	while (str[cont] != '\0' && (dst_len + cont) < (size - 1))
	{
		dst[dst_len + cont] = src[cont];
		cont++;
	}
	dst[dst_len + cont] = '\0';
	return (dst_len + src_len);
}