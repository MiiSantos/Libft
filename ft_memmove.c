/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:48:37 by mandress          #+#    #+#             */
/*   Updated: 2021/10/09 12:00:33 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t size)
{
	unsigned char	*src;
	unsigned char	*dest;
	size_t			i;

	i = 0;
	src = (unsigned char *)str2;
	dest = (unsigned char *)str1;
	if (src < dest)
	{
		while (i++ < size)
			dest[size - i] = src[size - i];
	}
	else
		ft_memcpy(dest, src, size);
	return (str1);
}
