/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 20:57:47 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/05 21:28:55 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *ptr, int value, size_t num)
{
	const char		*p;
	unsigned char	v;
	size_t			i;

	v = (unsigned char)value;
	p = ptr;
	i = 0;
	while (i < num && p != NULL)
	{
		if (p == v)
			return (p);
		i++;
		*p++;
	}
	return (NULL);
}