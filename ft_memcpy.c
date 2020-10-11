/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 17:29:01 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/12 04:50:52 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char	*ptr;
	const char		*s;
	size_t			i;

	i = 0;
	ptr = dest;
	s = src;
	while (i < num && s != NULL && ptr != NULL)
	{
		*ptr = *s;
		ptr++;
		s++;
		i++;
	}
	return (dest);
}
