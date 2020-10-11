/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 15:57:12 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/12 04:56:09 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <strings.h>
#include <unistd.h>

int                             main(int argc, const char *argv[])
{
        char    dest[15];
        char    dest2[15];
        int             arg;
        int             dest_len;
        int my = 0, ans = 0;

        dest_len = 15;
        memset(dest, 0, dest_len);
        memset(dest, 'r', 6);
        memset(dest2, 0, dest_len);
        memset(dest2, 'r', 6);
        dest[0] = '\0';
        dest[11] = 'a';
        dest2[0] = '\0';
        dest2[11] = 'a';
        my = ft_strlcat(dest, "lorem ipsum dolor sit amet", 0);
        ans = strlcat(dest2, "lorem ipsum dolor sit amet", 0);
        printf("my : %d ans : %d\n", my, ans);
        printf("%s  %s\n", dest, dest2);
}