/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:00:06 by mandress          #+#    #+#             */
/*   Updated: 2021/11/23 19:13:23 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_strlen(s);
	if (!s)
		return (0);
	if (size < start)
		return (ft_strdup(""));
	if (start + len > size)
		len = size - start;
	sub = (char *)malloc((sizeof(char) * len) + 1);
	if (!sub)
		return (0);
	while (len > 0)
	{
		sub[i] = s[i + start];
		i++;
		len--;
	}
	sub[i] = '\0';
	return (sub);
}
