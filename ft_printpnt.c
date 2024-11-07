/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpnt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogoalv <diogoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 00:31:52 by diogoalv          #+#    #+#             */
/*   Updated: 2024/11/07 05:54:39 by diogoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpnt(void *p)
{
	int				c;
	unsigned long	*n;

	c = 0;
	n = (unsigned long *)p;
	if (!p)
	{
		ft_printstr("(nil)");
		return (5);
	}
	else
	{
		ft_printstr("0x");
		c += 2;
		c += ft_printhexa((unsigned long)n, 'x');
	}
	return (c);
}
