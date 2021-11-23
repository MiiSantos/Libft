/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:00:06 by mandress          #+#    #+#             */
/*   Updated: 2021/11/19 18:26:12 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	sub = (char *)malloc((sizeof(char) * len) + 1);
	i = 0;
	if (!sub)
		return (0);
	j = start;
	while (len > 0)
	{
		sub[i] = s[j];
		i++;
		j++;
		len--;
	}
	sub[i] = '\0';
	return (sub);
}
