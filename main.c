/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:25:55 by mandress          #+#    #+#             */
/*   Updated: 2021/08/29 18:25:40 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

#include "libft.h"

int	main(void)
{
	printf("%d \n", ft_isalnum('Q'));
	printf("%d \n", ft_isalnum('0'));
	printf("%d \n", ft_isalnum('*'));

	ft_isalpha('Z');

	ft_isdigit('a');

	char src[] = "Old string of char";
	char dest[] = "New string baby";
	/* memset */
	printf("%p \n", ft_memset(src, '$', 10));

	printf("%d \n", ft_strlen(src));

	/* tolower + toupper*/
	printf("%c \n", ft_tolower('S'));
	printf("%c \n", ft_tolower('1'));
	printf("%c \n", ft_tolower('*'));

	printf("%c \n", ft_toupper('e'));
	printf("%c \n", ft_toupper('1'));
	printf("%c \n", ft_toupper('$'));

	ft_bzero(src, 4);
	printf("%s\n", src);

	/* memcpy */
	printf("%s str1 before memcpy ", dest);
	ft_memcpy (dest, src, sizeof(src));
	printf("\n%s str1 after memcpy\n", dest);

	return(0);
}
