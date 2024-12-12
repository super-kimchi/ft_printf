/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:13:21 by kyungkim          #+#    #+#             */
/*   Updated: 2024/12/12 20:40:37 by kyungkim         ###   ########.fr       */
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
	if (address > 16)
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

