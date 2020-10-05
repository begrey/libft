/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 20:04:46 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/05 20:48:50 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char	*temp;
	const char		*s;

	temp = dest;
	s = src;
	if (dest <= src)
	{
		while (num--)
			*temp++ = *s++;
	}
	else
	{
		temp += num;
		s += num;
		while (num--)
			*--temp = *--s;
	}
	return (dest);
}