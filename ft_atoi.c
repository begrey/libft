/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 16:55:59 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/07 17:36:30 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int minus;
	int total;

	i = 0;
	minus = 1;
	total = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		minus = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
		total += str[i++] - '0';
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		total *= 10;
		total += str[i] - '0';
		i++;
	}
	return (total * minus);
}
