/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:38:20 by kyungkim          #+#    #+#             */
/*   Updated: 2024/12/10 20:05:11 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>
#include <stdio.h>

static const char	*checkcases(const char *text, va_list *args)
{
	if (*text == 'c')
		ft_putchar((unsigned char)va_arg(*args, int));
	else if(*text == 's')
		ft_putstr(va_arg(*args, char *));
	//else if(*text == 'p')

	text++;
	return (text);
}

int	ft_printf(const char *text, ...)
{
	va_list args;

	va_start(args, text);
	while (*text)
	{
		if (*text == '%')
			text = checkcases(++text, &args);
		else
		{
			write(1, text, 1);
			text++;
		}
	}
	return (0);
}

int	main(void)
{
	char	*test = "hello 42 kay";
	ft_printf("charcter :%c: :%s:\n", -159, (char *)NULL);

	printf("printf :%c:\n", -159);
	printf("printf :%p:\n", test);
	printf("printf :%s:\n", (char *)NULL);
}
