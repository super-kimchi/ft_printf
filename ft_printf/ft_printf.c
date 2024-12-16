/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:38:20 by kyungkim          #+#    #+#             */
/*   Updated: 2024/12/16 22:42:34 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>
#include <stdio.h>

static const char	*checkcases(const char *text, va_list *args, int *count)
{
	if (*text == 'c')
		ft_putchar((unsigned char)va_arg(*args, int), count);
	else if (*text == 's')
		ft_putstr(va_arg(*args, char *), count);
	else if (*text == 'p')
		ft_printmemory((unsigned long)va_arg(*args, void *), count);
	else if (*text == 'd' || *text == 'i')
		ft_putint(va_arg(*args, int), count);
	else if (*text == 'u')
		ft_putuint(va_arg(*args, unsigned int), count);
	else if (*text == 'x' || *text == 'X')
		ft_printhex(va_arg(*args, unsigned int), count, *text);
	else if (*text == '%')
		ft_putchar('%', count);
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
