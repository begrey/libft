/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begrey <begrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 15:23:55 by begrey            #+#    #+#             */
/*   Updated: 2020/10/06 15:41:46 by begrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src , size_t size)
{
    size_t  i;

    i = 0;
    while (i < size - ft_strlen(dest) - 1)
    {
        *dest = *src;
        dest++;
        src++;
        i++;
    }
    *dest = '\0';
    if (size > ft_strlen(dest))
        return (ft_strlen(src) + ft_strlen(dest));
    else
        return (ft_strlen(src) + size);
}