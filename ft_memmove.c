/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:48:37 by mandress          #+#    #+#             */
/*   Updated: 2021/09/16 18:08:47 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *str1, const void *str2, size_t size)
{
	unsigned char *src;
	unsigned char *dest;
	size_t i;

	i = 0;
	src = (unsigned char *)str2;
	dest = (unsigned char *)str1;
	if (src < dest)
	{
		while ((i - 1) <= size)
		{
			dest[size] = src[size];
			size--;
		}
	}
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return(str1);
}
