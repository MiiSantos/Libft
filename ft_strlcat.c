/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 23:04:12 by mandress          #+#    #+#             */
/*   Updated: 2021/09/16 18:09:07 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t dlen;
	size_t slen;
	size_t i;

	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen((char *)src);
	while (dlen < size)
	{
		dest[dlen] = src[i];
		dlen++;
		src++;
	}
	dest[dlen] = '\0';
	return (dlen + slen);
}
