/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 20:50:01 by mandress          #+#    #+#             */
/*   Updated: 2021/09/16 21:55:52 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char ft_strchr (const char *str, int c)
{
	while (*str != c && *str != '\0')
	{
		str++;
		if(str == (char)c)
			return (str);
	}
	return (0);
}
