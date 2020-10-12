/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 15:57:12 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/12 15:17:41 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <strings.h>
#include <unistd.h>

int                             main(int argc, const char *argv[])
{
        char    *my;
        char    *ans;
        
        ans = "ninini";
        my = ft_strdup(ans);
        printf("%s\n", my);
}