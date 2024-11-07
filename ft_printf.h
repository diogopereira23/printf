/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogoalv <diogoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:33:27 by diogoalv          #+#    #+#             */
/*   Updated: 2024/11/07 03:46:04 by diogoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int ft_printunnum(unsigned int i);
int ft_printchar(char *s);
int ft_printpnt(void *p);
int ft_printnum(int i);
int ft_printhexa(unsigned long n, char c);
int ft_printf(const char *p, ...);
int ft_printchar(char c);

#endif