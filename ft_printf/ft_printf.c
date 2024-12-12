/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:38:20 by kyungkim          #+#    #+#             */
/*   Updated: 2024/12/12 20:19:32 by kyungkim         ###   ########.fr       */
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
		ft_puthex((unsigned long)va_arg(*args, void *), count);
	//else if(*text == 'p')

	text++;
	return (text);
}

int	ft_printf(const char *text, ...)
{
	int		c;
	va_list args;

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
	return (c);
}

int	main(void)
{
	char	*test = "hello 42 kay";
//	char	*test1 = NULL;
	int	counter = ft_printf("charcter :%c: :%s:\n", -159, test);
	int	counter2 = printf("charcter :%c: :%s:\n", -159, test);
	printf("%d\n", counter);
	printf("%d\n", counter2);

//	printf("%d", printf("printf :%c:\n", -159));
//	printf("printf :%p:\n", test);
//	printf("printf :%s:\n", (char *)NULL);
	printf("printf :%05d:\n", 32);
	ft_printf("%p\n", test);
	printf("%p\n", test);
	
}
