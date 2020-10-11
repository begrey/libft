/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 20:03:15 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/10 13:30:14 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>

void    *ft_memset(void *dest, int c, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t num);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t num);
void	*ft_memchr(const void *ptr, int value, size_t num);
int     ft_memcmp(const void *ptr1, const void* ptr2, size_t num);
void    ft_bzero(void *s, size_t n);
size_t  ft_strlen(const char *str);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
size_t  ft_strlcat(char *dest, const char *src , size_t size);
char    *ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *str, int c);
char    *ft_strnstr(const char *big, const char *little, size_t len);
int     ft_strncmp(const char *str1, const char *str2, size_t num);
int     ft_atoi(const char* str);
int     ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int     ft_tolower(int c);
int     ft_toupper(int c);
void    *ft_calloc(size_t elt_count, size_t elt_size);
char    *strdup(const char *str);
#endif