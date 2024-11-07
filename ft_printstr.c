/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogoalv <diogoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 00:26:04 by diogoalv          #+#    #+#             */
/*   Updated: 2024/11/07 03:30:08 by diogoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int ft_printchar(char *s)
{
    int i;
    int len;

    len = 0;
    i = 0;
    if (!s)
    {
        write(1, "(null)", 6);
        return (6);
    }
    while(s[i])
    {
        write (1, &s[i], 1);
        i++;
        len++;
    }
    return (len);
}