/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogoalv <diogoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 01:48:16 by diogoalv          #+#    #+#             */
/*   Updated: 2024/11/07 03:30:13 by diogoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int ft_printunnum(unsigned int i)
{
    int c;

    c = 0;
    if (i < 10)
    {
        c += ft_printchar(i + 48);
    }
    if (i >= 10)
    {
        c += ft_printunnum(i / 10);
        c += ft_printunnum(i % 10);
    }
    return (c);
}