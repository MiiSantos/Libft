/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:08:51 by mandress          #+#    #+#             */
/*   Updated: 2021/11/23 19:39:20 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_memcmp(const void *str1, const void *str2, size_t nb)
{
	unsigned char	*a;
	unsigned char	*b;

	if (!nb)
		return (0);
	a = (unsigned char *)str1;
	b = (unsigned char *)str2;
	while ((nb - 1 > 0) && (*a == *b))
	{
		nb--;
		a++;
		b++;
	}
	return (*a - *b);
}
