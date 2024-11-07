/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogoalv <diogoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:32:17 by diogoalv          #+#    #+#             */
/*   Updated: 2024/11/07 03:30:00 by diogoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i])
    {
        if (s[i] == c)
            return ((char *)&s[i]);
        i++;
    }
    if (s[i] == c)
        return ((char *)&s[i]);
    return (NULL);
}

int findtype(char c, va_list arg)
{
    if (c == 'c')
        return (ft_printchar(va_arg(arg, int)));
    if (c == 's')
        return (ft_printstr(va_arg(arg, char *)));
    if (c == 'p')
        return (ft_printpnt(va_arg(arg, void *)));
    if (c == 'd' || c == 'i')
        return (ft_printnum(va_arg(arg, int)));
    if (c == 'u')
        return (ft_printunnum(va_arg(arg, unsigned int)));
    if (c == 'x' || x == 'X')
        return (ft_printhexa(va_arg(arg, unsigned int), c));
    return (ft_printchar(c));
}

int ft_printf(const char *p, ...)
{
    va_list arg;
    int i;
    int count;

    va_start(arg, p);
    i = 0;
    count = 0;
    while(p[i])
    {
        if (p[i] == '%' && ft_strchr("cspdiuxX%", p[i + 1]))
        {
            i++;
            count += findtype(p[i], arg)
        }
        else
            ft_printchar(p[i]);
        i++;
    }
    va_end(arg);
    return (count);
}