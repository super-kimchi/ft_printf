/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:13:21 by kyungkim          #+#    #+#             */
/*   Updated: 2024/12/10 20:00:45 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	if (!str)
		return ft_putstr("(null)");
	while (*str)
	{
		write(1, str, 1);
		str++;
	}

}
