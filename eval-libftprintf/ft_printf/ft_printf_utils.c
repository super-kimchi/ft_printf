/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:13:21 by kyungkim          #+#    #+#             */
/*   Updated: 2024/12/18 13:20:54 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_putstr(char *str, int *count)
{
	if (!str)
		return (ft_putstr("(null)", count));
	while (*str)
	{
		write(1, str, 1);
		(*count)++;
		str++;
	}
}

void	ft_putnbr(long n, int *count)
{
	long	output;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count += 11;
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
		(*count)++;
	}
	if (n >= 10)
		ft_putnbr(n / 10, count);
	output = (n % 10) + '0';
	write(1, &output, 1);
	(*count)++;
}

void	ft_puthex(unsigned long address, int *count, char c)
{
	char	*hex;

	if (c == 'p')
	{
		if (!address)
		{
			ft_putstr("(nil)", count);
			return ;
		}
		write(1, "0x", 2);
		*count += 2;
		return (ft_puthex(address, count, 'x'));
	}
	if (c == 'x')
		hex = "0123456789abcdef";
	else if (c == 'X')
		hex = "0123456789ABCDEF";
	if (address >= 16)
		ft_puthex(address / 16, count, c);
	write(1, &hex[address % 16], 1);
	(*count)++;
}
