/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begrey <begrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 17:41:04 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/06 18:24:30 by begrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			flag;
	
	flag = 0;
	ptr = (unsigned char *)src;
	while (ptr != NULL)
	{
		flag++;
		if (*ptr == (unsigned char)c)
		{
			ptr++;
			break ;
		}
		ptr++;
	}
	if (*ptr == '\0')
		ft_memcpy(dest, src, n);
	else
		ft_memcpy(dest, src, flag);
	return (ptr);
}