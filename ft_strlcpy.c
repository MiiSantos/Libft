/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 21:49:54 by mandress          #+#    #+#             */
/*   Updated: 2021/09/16 18:09:18 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned char *d;
	unsigned char *s;
	size_t len;

	d = (unsigned char*)dest;
	s = (unsigned char *)src;
	len = size;
	if (size != 0)
	{
		while (len-- != 0)
		{
			if ((*d++ = *s++) == '\0')
				break;
		}
		*d = '\0';
	}
	return (size);
}
