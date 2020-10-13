/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimkwon <jimkwon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 15:57:12 by jimkwon           #+#    #+#             */
/*   Updated: 2020/10/13 20:34:17 by jimkwon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <strings.h>

void    ft_print_result(char const *s)
{
        int             len;

        len = 0;
        while (s[len])
                len++;
        write(1, s, len);
}

int             main(int argc, const char *argv[])
{
        char    **tabstr;
        int             i;
        int             arg;

        alarm(5);
        if (argc == 1)
                return (0);
        i = 0;
        if ((arg = atoi(argv[1])) == 1)
        {
                if (!(tabstr = ft_split("          ", ' ')))
                        ft_print_result("NULL");
                else
                {
                        while (tabstr[i] != 0)
                        {
                                ft_print_result(tabstr[i]);
                                write(1, "\n", 1);
                                i++;
                        }
                }
        }
        else if (arg == 2)
        {
                if (!(tabstr = ft_split("ab cde f ghijk", ' ')))
                        ft_print_result("NULL");
                else
                {
                        while (tabstr[i] != 0)
                        {
                                ft_print_result(tabstr[i]);
                                write(1, "\n", 1);
                                i++;
                        }
                }
        }
        else if (arg == 3)
        {
                if (!(tabstr = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ')))
                        ft_print_result("NULL");
                else
                {
                        while (tabstr[i] != 0)
                        {
                                ft_print_result(tabstr[i]);
                                write(1, "\n", 1);
                                i++;
                        }
                }
        }
        else if (arg == 4)
        {
                if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i')))
                        ft_print_result("NULL");
                else
                {
                        while (tabstr[i] != 0)
                        {
                                ft_print_result(tabstr[i]);
                                write(1, "\n", 1);
                                i++;
                        }
                }
        }
        else if (arg == 5)
        {
                if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z')))
                        ft_print_result("NULL");
                else
                {
                        while (tabstr[i] != 0)
                        {
                                ft_print_result(tabstr[i]);
                                write(1, "\n", 1);
                                i++;
                        }
                }
        }
        else if (arg == 6)
        {
                if (!(tabstr = ft_split("", 'z')))
                        ft_print_result("NULL");
                else
                        if (!tabstr[0])
                                ft_print_result("ok\n");
        }
        return (0);
}