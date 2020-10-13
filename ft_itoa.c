/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 16:06:00 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/13 18:01:53 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*make_itoa(char *str, int n, int len)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			str[--len] = '8';
			n /= 10;
		}
		n *= -1;
	}
	while (n > 9)
	{
		str[--len] = n % 10 + '0';
		n /= 10;
	}
	str[--len] = (n % 10) + '0';
	return (str);
}

int			count_len(int n)
{
	int		len;

	len = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			n += 8;
		n *= -1;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	int		minus;
	char	*str;
	char	*ans;

	if (n < 0)
	{
		len = 1;
		minus = 1;
	}
	else if (n == 0)
		return ("0");
	else 
		len = 0;
	len += count_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (minus == 1)
		*str = '-';
	str[len] = '\0';
	ans = make_itoa(str, n, len);
	return (ans);
}