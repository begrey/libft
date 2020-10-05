/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 16:18:13 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/05 20:55:34 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dest, const void *src, size_t num)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = dest;
	while (i < num && src != NULL && ptr != NULL)
	{
		ptr = src;
		*ptr++;
		*src++;
		i++;
	}
	return (dest);
}



