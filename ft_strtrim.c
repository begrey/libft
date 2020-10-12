/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 19:04:39 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/12 20:39:23 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, const char *set)
{
	char	*str;
	char	*ptr;
	size_t	i;
	size_t	len;

	i = 0;
	str = ft_strdup(s1);
	len = ft_strlen(str);
	ptr = str;
	while (ft_strchr(set, *str) != NULL && *str != '\0')
	{
		str++;
		i++;
	}
	if (i == len)
		return ("");
	while (*ptr != '\0')
		ptr++;
	ptr--;
	while (ft_strchr(set, *ptr) != NULL)
		ptr--;
	*(++ptr) = '\0';
	return (str);
}
