/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begrey <begrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 14:21:25 by begrey            #+#    #+#             */
/*   Updated: 2020/10/07 15:34:05 by begrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int         ft_memcmp(const void* ptr1, const void* ptr2, size_t num)
{
    const char    *p1;
    const char    *p2;
    size_t          i;

    p1 = ptr1;
    p2 = ptr2;
    i = 0;
    while (i < num && p1[i] != '\0' && p2[i] != '\0')
    {
        if (p1[i] != p2[i]) 
            return (p1[i] - p2[i]);
        i++;
    }
    return (p1[i] - p2[i]);
}