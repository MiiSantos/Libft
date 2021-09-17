/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 20:52:51 by mandress          #+#    #+#             */
/*   Updated: 2021/09/16 20:15:10 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memchr(const void *str, int c, size_t n)
{
	char *s;

	s = (char *)str;
	while (n--)
		if (*s++ == (char)c)
			return (s);
	return (0);
}
