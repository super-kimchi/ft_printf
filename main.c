/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 09:34:25 by kyungkim          #+#    #+#             */
/*   Updated: 2024/12/16 19:39:36 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

int	main(void)
{
	char	*test = "hello 42 kay";
//	char	*test1 = NULL;
	int	counter = ft_printf("ft_printf: charcter :%c: :%s:\n", -159, test);
	int	counter2 = printf("printf: charcter :%c: :%s:\n", -159, test);
	printf("ft_printf return value: %d\n", counter);
	printf("ft_printf return value: %d\n\n", counter2);

//	printf("%d", printf("printf :%c:\n", -159));
//	printf("printf :%p:\n", test);
//	printf("printf :%s:\n", (char *)NULL);
	ft_printf("-0 test\n");
	printf("printf -05d flag :%05d:\n\n", 32);

	ft_printf("pointer test -p\n");
	ft_printf("ft_printf: %p\n", test);
	printf("printf: %p\n", test);
	ft_printf("ft_printf: %p\n", (void *)0);
	printf("printf: %p\n", (void *)0);
	
	
	ft_printf("ft_printf= -p, 15: %p \n", (void *)15);
	ft_printf("ft_printf= -p, 16: %p \n", (void *)16);
	printf("printf= -p, 16: %p \n\n", (void *)16);

	ft_printf("test -d: %d\n", 12);
	ft_printf("test -d: %d\n", 2147483647);
	ft_printf("test -d: %d\n", 2147483648);
	int min = -2147483648;
	int counter3 = ft_printf("test -d: %d\n", -2147483648);
	int	counter4 = printf("test -d: %d\n", min);
	
	printf("printf return: %d\n", counter4);
	ft_printf("ft_printf return: %d\n", counter3);

	printf("printf -d with octal: %d\n", 012);
	ft_printf("ft_printf -d with octal: %d\n", 012);
	
	ft_printf("ft_printf -u test\n");
	ft_printf("ft_printf -u: %u\n", 4294967295);
	printf("printf -u: %u\n", (unsigned int)4294967295);
	ft_printf("ft_printf -u: %u\n", -1);
	printf("printf -u: %u\n", -1);
	ft_printf("ft_printf -u: %u\n", (unsigned int)4294967296);
	printf("printf -u: %u\n", (unsigned int)4294967296);

	ft_printf("ft_printf -x -X test\n");
	ft_printf("ft_printf -x: %x\n", 16);
	printf("printf -x: %x\n", 16);
	ft_printf("ft_printf -x: %x\n", 32);
	printf("printf -x: %x\n", 32);
	ft_printf("ft_printf -x: %x\n", -1);
	printf("printf -x: %x\n", -1);
	ft_printf("ft_printf -X: %X\n", 16);
	printf("printf -X: %X\n", 16);
	ft_printf("ft_printf -X: %X\n", 32);
	printf("printf -X: %X\n", 32);
	ft_printf("ft_printf -X: %X\n", -1);
	printf("printf -X: %X\n", -1);
//	printf("Manually encoded UTF-8: :%c%c:\n", 0xC2, 0xA9);
//	printf("Manually encoded UTF-8: :%c%c:\n", 0xC2, 0xA9);
//	ft_printf("my printf :%c: :%c: :%c:\n", 0xC3, 31, -1);
//	printf("real printf :%c: :%c: :%c:\n", 256+32 , 31, -1);
//	ft_printf("capitalize %c", ft_toupper('a'));
}
