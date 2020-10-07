/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begrey <begrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 16:18:13 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/06 15:08:03 by begrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char	*ptr;
	const char *s;
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



