/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:00:06 by mandress          #+#    #+#             */
/*   Updated: 2021/11/23 18:23:33 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	size;

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
	if (!sub)
		return (0);
	ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}
