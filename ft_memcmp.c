/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:08:51 by mandress          #+#    #+#             */
/*   Updated: 2021/09/16 18:08:30 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
size_t  ft_memcmp(const void *str1, const void *str2, size_t nb)
{
   unsigned char *a;
   unsigned char *b;

   a = (unsigned char *)str1;
   b = (unsigned char *)str2;
    while((nb--) && a++, b++)
    {
        if(a != b)
            return (a - b);
    }
    return (0);
}
