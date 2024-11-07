/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogoalv <diogoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 01:57:50 by diogoalv          #+#    #+#             */
/*   Updated: 2024/11/07 04:57:52 by diogoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnum(int i)
{
	int		c;
	long	l;

	l = i;
	c = 0;
	if (l < 0)
	{
		c += ft_printchar('-');
		l *= -1;
	}
	if (l <= 9)
	{
		c += ft_printchar(l + 48);
	}
	if (l > 9)
	{
		c += ft_printnum(l / 10);
		c += ft_printnum(l % 10);
	}
	return (c);
}
