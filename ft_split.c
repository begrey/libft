/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 18:05:44 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/13 20:41:41 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*get_word(char *s, int len)
{
	char	*p;
	char	*word;
	char	*word_p;

	word = (char *)malloc(sizeof(char) * (len + 1));
	word_p = word;
	p = s;
	while(len != 0)
	{
		*word++ = *p++;
		len--;
	}
	*word = '\0';
	return (word_p);
}

int			word_len(char *s, char c)
{
	int	len;

	len = 0;
	while (*s != '\0' && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

int			count_len(char *s, char c)
{
	int		len;
	
	len = 0;
	while (*s == c && *s != '\0')
		s++;
	while (*s != '\0')
	{
		if (*s != c)
		{
			len++;
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**word;
	char	**ans;
	char	*ptr;
	char	*w;
	int		len;

	ptr = (char *)s;
	len = count_len((char *)s, c);
	word = (char**)malloc(sizeof(char *) * (len + 1));
	ans = word;
	while (ptr != NULL && *ptr != '\0')
	{
		if (*ptr != c)
		{
			len = word_len(ptr, c);
			*word = (char *)malloc(sizeof(char) * (len + 1));
			w = get_word(ptr, len);
			*word = w;
			word++;
			ptr = ft_strchr(ptr, c);
		}
		else 
			ptr++;
	}
	*word = NULL;
	return (ans);
}