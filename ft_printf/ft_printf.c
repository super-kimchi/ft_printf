/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:38:20 by kyungkim          #+#    #+#             */
/*   Updated: 2025/01/03 18:15:26 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static const char	*checkcases(const char *text, va_list *args, int *count)
{
	if (*text == 'c')
		ft_putchar((unsigned char)va_arg(*args, int), count);
	else if (*text == 's')
		ft_putstr(va_arg(*args, char *), count);
	else if (*text == 'p')
		ft_puthex((unsigned long)va_arg(*args, void *), count, *text);
	else if (*text == 'd' || *text == 'i')
		ft_putnbr(va_arg(*args, int), count);
	else if (*text == 'u')
		ft_putnbr(va_arg(*args, unsigned int), count);
	else if (*text == 'x' || *text == 'X')
		ft_puthex(va_arg(*args, unsigned int), count, *text);
	else if (*text == '%')
		ft_putchar('%', count);
	else
		return (text);
	text++;
	return (text);
}

int	ft_printf(const char *text, ...)
{
	int		c;
	va_list	args;

	c = 0;
	va_start(args, text);
	while (*text)
	{
		if (*text == '%')
			text = checkcases(++text, &args, &c);
		else
		{
			write(1, text, 1);
			c++;
			text++;
		}
	}
	va_end(args);
	return (c);
}
/*
static	int	checkcases(char text, va_list *args)
{
	if (text == 'c')
		return ft_putchar_fd((unsigned char)va_arg(*args, int), 1);
	else if (text == 's')
		return ft_putstr(va_arg(*args, char *), count);
	else if (text == 'p')
		return ft_putnbr_base((unsigned long)va_arg(*args, void *),
		"0123456789abcdef");
	else if (text == 'd' || text == 'i')
		return ft_putint(va_arg(*args, int), count);
	else if (text == 'u')
		return ft_putuint(va_arg(*args, unsigned int), count);
	else if (text == 'x')
		return ft_putnbr_base(va_arg(*args, unsigned int), "0123456789abcdef");
	else if (text == 'X')
		return ft_putnbr_base(va_arg(*args, unsigned int), "0123456789ABCDEF");
	else if (text == '%')
		return (ft_putchar('%'), 1);
}

int	ft_printf(const char *text, ...)
{
	int		c;
	va_list	args;

	va_start(args, text);
	c = 0;
	while (*text)
	{
		if (*text == '%' && *(text + 1))
			c += checkcases(*text, args);
		else if
		{
			write(1, text, 1);
			c++;
		}
	}
	va_end(args);
	return (c);
}
*/
