/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 17:41:04 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/05 20:03:33 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			flag;
	size_t			i;

	i = 0;
	flag = 0;
	ptr = src;
	while (ptr != NULL)
	{
		flag++;
		if (ptr == (unsigned char)c)
		{
			*ptr++;
			break ;
		}
		*ptr++;
	}
	if (ptr == NULL)
		ft_memcpy(dest, src, n);
	else
		ft_memcpy(dest, src, flag);
	return (ptr);
}