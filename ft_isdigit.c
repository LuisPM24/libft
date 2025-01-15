/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalomin <lpalomin@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:40:28 by lpalomin          #+#    #+#             */
/*   Updated: 2025/01/14 12:40:31 by lpalomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>*/

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*int	main()
{
    int    c = 50;

    printf("number: %d \n", ft_isdigit(c));
    printf("number: %d", ft_isdigit(c));
    return(0);
}*/