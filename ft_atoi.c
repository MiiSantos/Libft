/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 20:46:50 by mandress          #+#    #+#             */
/*   Updated: 2021/09/16 18:42:09 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
long int	ft_atoi(const char *str)
{
    int    sign;
    int    nb;

    sign = 1;
    nb = 0;
    if(*str == '\0')
        return (0);
    while(*str == ' ')
        str++;
    if(*str == '-')
    {
        sign = -1;
        str++;
    }
    while ((*str >= '0' || *str <= '9') &&(*str != '\0'))
    {
        nb = nb * 10 + (*str - '0');
        str++;
    }
    return (nb * sign);
}
