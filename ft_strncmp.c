/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 22:19:08 by mandress          #+#    #+#             */
/*   Updated: 2021/09/16 18:09:31 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strncmp (const char *s1, const char *s2, size_t num)
{
    while((num--) && *s1++ == *s2++)
    {
        if(*s1 != *s2)
            return ((char*)s1 - (char*)s2);
    }
    return (0);
}
