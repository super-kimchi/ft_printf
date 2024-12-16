/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:13:21 by kyungkim          #+#    #+#             */
/*   Updated: 2024/12/16 12:15:05 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char	c, int	*count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_putstr(char *str, int *count)
{
	if (!str)
		return ft_putstr("(null)", count);
	while (*str)
	{
		write(1, str, 1);
		(*count)++;
		str++;
	}
}

static void	printhex(unsigned long address, int *count)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (address >= 16)
		printhex(address/16, count);
	write(1, &hex[address % 16], 1);
	(*count)++;
}

void	ft_puthex(unsigned long address, int *count)
{
	write(1, "0x", 2);
	*count += 2;
	printhex(address, count);
}
/*
void	ft_putnbr(int n, int *count)
{
	long	num;
	int		output;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count += 11;
		return ; 
	}
	num = n;
	if (num < 0)
	{
		num *= -1;
		write(1, "-", 1);
		(*count)++;
	}
	if (num >= 10)
		ft_putnbr(num / 10, count);
	output = (num % 10) + '0';
	write(1, &output, 1);
	(*count)++;
}
*/



