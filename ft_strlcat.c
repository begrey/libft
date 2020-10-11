/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 17:29:37 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/12 03:59:41 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		count_len(char *dest)
{
	size_t	len;

	len = 0;
	while (*dest != '\0')
	{
		len++;
		dest++;
	}
	return (len);
}

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	int		i;
	int		len;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = count_len(dest);
	src_len = count_len((char *)src);
	while (i++ < (int)dest_len)
		dest++;
	i = 0;
	len = (int)(size - dest_len - 1);
	while (len > 0 && i < len && *src != '\0')
	{
		*dest = *(char *)src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	if (size > dest_len)
		return (src_len + dest_len);
	else
		return (src_len + size);
}
