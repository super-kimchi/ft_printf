/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:36:05 by kyungkim          #+#    #+#             */
/*   Updated: 2024/12/16 19:52:26 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	puthex(unsigned long address, int *count, char c)
{
	char	*hex;

	if (c == 'x')
		hex = "0123456789abcdef";
	else if (c == 'X')
		hex = "0123456789ABCDEF";
	if (address >= 16)
		puthex(address / 16, count, c);
	write(1, &hex[address % 16], 1);
	(*count)++;
}

void	ft_printmemory(unsigned long address, int *count)
{
	if (!address)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	write(1, "0x", 2);
	*count += 2;
	puthex(address, count, 'x');
}

void	ft_printhex(unsigned int n, int *count, char c)
{
	puthex(n, count, c);
}
