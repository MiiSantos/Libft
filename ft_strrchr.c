/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 21:25:10 by mandress          #+#    #+#             */
/*   Updated: 2021/10/09 13:43:55 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*find;

	i = 0;
	find = NULL;
	if (c == 0)
		return (ft_strchr(str, '\0'));
	while (*str)
	{
		if (*str == c)
			find = (char *)str;
		str++;
	}
	return (find);
}
