/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogoalv <diogoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 02:44:59 by diogoalv          #+#    #+#             */
/*   Updated: 2024/11/07 04:56:10 by diogoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa(unsigned long n, char c)
{
	int	i;

	i = 0;
	if (n < 10)
	{
		i += ft_printchar(n + 48);
	}
	if (n >= 10 && n <= 15)
	{
		if (c == 'x')
			i += ft_printchar(n + 87);
		else
			i += ft_printchar(n + 55);
	}
	if (n > 15)
	{
		i += ft_printhexa(n / 16, c);
		i += ft_printhexa(n % 16, c);
	}
	return (i);
}
