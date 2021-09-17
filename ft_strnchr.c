/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 23:06:41 by mandress          #+#    #+#             */
/*   Updated: 2021/09/14 19:56:37 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp (const char *s1, const char *s2, unsigned int num)
{
    while((num--) && *s1++ == *s2++)
    {
    if(s1 != s2)
        return ((char)s1 - (char)s2);
    }
    return (0);
}
