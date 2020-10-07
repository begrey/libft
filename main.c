/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begrey <begrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 15:57:12 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/07 16:16:43 by begrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <strings.h>
#include <unistd.h>
static void             check_bzero(void *mem, int c, int len, int n_bzero)
{
        memset(mem, c, len);
        ft_bzero(mem, n_bzero);
        write(1, mem, len);
}
int                             main(int argc, const char *argv[])
{
        void    *mem;
        int             len;
        int             arg;

        alarm(5);
        len = 5;
        if (argc == 1 || !(mem = malloc(sizeof(*mem) * len)))
                return (0);
        if ((arg = atoi(argv[1])) == 1)
                check_bzero(mem, 'e', len, 5);
        else if (arg == 2)
                check_bzero(mem, 'e', len, 0);
        free(mem);
        return (0);
}