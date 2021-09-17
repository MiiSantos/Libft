/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 11:11:36 by mandress          #+#    #+#             */
/*   Updated: 2021/09/16 18:59:55 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *ft_calloc(unsigned int num, size_t size)
{
	size_t total;
    void *p;

    total = num * size;
    p = malloc(total);
    if (!p)
        return (NULL);
    return (ft_memset(p, 0, total));
}
