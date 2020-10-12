/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 17:30:52 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/12 12:56:25 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if ((int)size <= 0)
		return (len);
	while (i < size - 1 && *src != '\0')
	{
		*dest = *(char *)src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (len);
}
