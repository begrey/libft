/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 15:57:12 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/05 16:14:35 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <strings.h>

int main()
{
    char a[20];
    char b[20];

    memset(a, 65, sizeof(a));
    ft_memset(b, 65, sizeof(b));

    for(int i = 0; i < (sizeof(a)/sizeof(char)); i++){
        printf("%c ", a[i]);
    }
    printf("\n");
    for(int i = 0; i < (sizeof(b)/sizeof(char)); i++){
        printf("%c ", b[i]);
    }
    printf("\n");
    bzero(a, sizeof(a));
    ft_bzero(b, sizeof(b));
    for(int i = 0; i < (sizeof(a)/sizeof(char)); i++){
        printf("%c ", a[i]);
        printf("g");
    }
    printf("\n");
    for(int i = 0; i < (sizeof(b)/sizeof(char)); i++){
        printf("%c ", b[i]);
    }
    printf("\n");
}