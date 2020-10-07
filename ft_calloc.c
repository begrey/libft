/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begrey <begrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 17:46:50 by begrey            #+#    #+#             */
/*   Updated: 2020/10/06 18:07:00 by begrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t elt_count, size_t elt_size)
{
    void    *str;
    
    str = malloc(elt_count * elt_size);
    ft_bzero(str, elt_count);
    return (str);
}