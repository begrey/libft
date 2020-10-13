/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 15:39:07 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/13 16:04:50 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*p;
	size_t			len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s);
	str = (char *)ft_strdup(s);
	p = str;
	while (i != (unsigned int)len)
		*p++ = (*f)(i++, *s++);
	return (str);
}