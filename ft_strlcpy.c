/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begrey <begrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 15:17:05 by begrey            #+#    #+#             */
/*   Updated: 2020/10/06 15:23:19 by begrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t      ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t  i;

    i = 0;
    while (i < size - 1)
    {
        *dest = *src;
        dest++;
        src++;
        i++;
    }
    *dest = '\0';
    return (size - 1);
}