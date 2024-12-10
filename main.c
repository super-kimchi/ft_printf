/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 09:34:25 by kyungkim          #+#    #+#             */
/*   Updated: 2024/12/10 19:29:56 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

int	main(void)
{
	printf("Manually encoded UTF-8: :%c%c:\n", 0xC2, 0xA9);
	ft_printf("my printf :%c: :%c: :%c:\n", 0xC3, 31, -1);
	printf("real printf :%c: :%c: :%c:\n", 256+32 , 31, -1);
	ft_printf("capitalize %c", ft_toupper('a'));
}
