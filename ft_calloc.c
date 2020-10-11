/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 17:27:45 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/07 17:39:35 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t elt_count, size_t elt_size)
{
	void	*str;

	str = malloc(elt_count * elt_size);
	ft_bzero(str, elt_count);
	return (str);
}
