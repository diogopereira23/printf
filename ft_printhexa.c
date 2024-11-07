/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogoalv <diogoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 02:44:59 by diogoalv          #+#    #+#             */
/*   Updated: 2024/11/07 03:29:59 by diogoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int ft_printhexa(unsigned long n, char c)
{
    int c;

    c = 0;
    if (n >= 0 && n <= 9)
    {
        c += ft_printchar(n + 48);
    }
    if (n >= 10 && <= 15)
    {
        if (c == 'x')
            c += ft_printchar(n + 87);
        else
            c += ft_printchar(n + 55);
    }
    if (n > 15)
    {
        c += ft_printhexa(n / 16);
        c += ft_printhexa(n % 16);
    }
    return (c);
}