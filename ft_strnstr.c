/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 16:13:15 by begrey            #+#    #+#             */
/*   Updated: 2020/10/12 04:56:51 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*b;
	char	*l;
	char	*temp;

	i = 0;
	b = (char *)big;
	l = (char *)little;
	if (*l == '\0')
		return (b);
	while (*b != '\0' && i < len)
	{
		l = (char *)little;
		if (*b == *l)
		{
			temp = b;
			while (*b != '\0' && *l != '\0')
			{
				b++;
				l++;
			}
			if (*l == '\0')
				return (b);
			b = temp;
		}
		b++;
	}
	return (NULL);
}
