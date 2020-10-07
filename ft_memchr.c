/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begrey <begrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 20:57:47 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/06 18:25:30 by begrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *ptr, int value, size_t num)
{
	unsigned char	*p;
	unsigned char	v;
	size_t			i;

	v = (unsigned char)value;
	p = (unsigned char *)ptr;
	i = 0;
	while (i < num && p != NULL)
	{
		if (*p == v)
			return (p);
		i++;
		p++;
	}
	return (NULL);
}