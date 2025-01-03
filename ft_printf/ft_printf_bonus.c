/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:47:47 by kyungkim          #+#    #+#             */
/*   Updated: 2024/12/18 13:18:51 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_putpad(const char *text, int *count)
{
	char	*nstr;
	int		i;
	int		number;

	i = 0;
	while ('0' <= text[i] && text[i] <= '9')
		i++;
	nstr = ft_substr(text, 0, i);
	number = ft_atoi(nstr);
	while (number-- > 0)
	{
		write(1, "0", 1);
		(*count)++;
	}
	return ((char *)(text + i));
}
