/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:05:03 by kyungkim          #+#    #+#             */
/*   Updated: 2024/12/16 12:20:58 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(long n, int *count)
{
	int		output;

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

void	ft_putint(int n, int *count)
{
	long	num;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count += 11;
		return ; 
	}
	num = n;
	ft_putnbr(num, count);
}

void	ft_putuint(unsigned int n, int *count)
{
	ft_putnbr(n, count);
}


