/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:00:06 by mandress          #+#    #+#             */
/*   Updated: 2021/11/23 17:42:24 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(s);
	if (!s)
		return (0);
	if (size < start)
	{
		sub = (char *)ft_calloc(sizeof(char), 1);
		if (!sub)
			return (NULL);
		return (sub);
	}
	sub = (char *)malloc((sizeof(char) * len) + 1);
	while (len > 0)
	{
		sub[i] = s[i + start];
		i++;
		len--;
	}
	sub[i] = '\0';
	return (sub);
}
