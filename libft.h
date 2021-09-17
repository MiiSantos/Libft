/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandress <mandress@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:42:58 by mandress          #+#    #+#             */
/*   Updated: 2021/09/16 19:51:57 by mandress         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

long int	ft_atoi(const char *str);

void	ft_bzero(void *s, size_t n);

void    *ft_calloc(unsigned int num, size_t size);

int	ft_isalnum(int a);

int	ft_isalpha(int a);

int	ft_isascii(int a);

int	ft_isdigit(int a);

int	ft_isprint(int a);

void	*ft_memchr(const void *str, int c, size_t n);

size_t  ft_memcmp(const void *str1, const void *str2, size_t nb);

void *ft_memcpy(void *dest, const void *src, size_t size);

void *ft_memmove(void *str1, const void *str2, size_t size);

void	*ft_memset(void *str, int c, size_t nb);

char ft_strchr (const char *str, int c);

size_t  ft_strlcat(char *dest, const char *src, size_t size);

size_t ft_strlcpy(char *dest, const char *src, size_t size);

int	ft_strlen(char *str);

int ft_strncmp (const char *s1, const char *s2, unsigned int num);

char    *ft_strnstr(const char *str, const char *sub, size_t num);

char *ft_strrchr(const char *str, int c);

int	ft_tolower(int c);

int	ft_toupper(int c);

#endif
