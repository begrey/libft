/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 18:14:06 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/13 14:55:57 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (len == 0)
		return (ft_strdup(""));
	else if (*s1 == '\0')
		return (ft_strdup(s2));
	else if (*s2 == '\0')
		return (ft_strdup(s1));
	else
		str = (char *)malloc(sizeof(char) * (len + 1));
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, len + 1);
	return (str);
}
