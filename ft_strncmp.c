/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begrey <begrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 16:30:25 by begrey            #+#    #+#             */
/*   Updated: 2020/10/06 16:38:57 by begrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *str1, const char *str2, size_t num)
{
    while (num > 0 && *str1 != '\0' && *str2 != '\0')
    {
        if (*str1 != *str2)
            return (*str1 - *str2);
        str1++;
        str2++;
        num--;
    }
    return (0);
}