/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:26:22 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/13 17:28:38 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*start;

	start = s;
	while (n > 0)
	{
		*start = (unsigned char) c;
		start += 1;
		n--;
	}
	return (s);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	test1[] = "hihi";
	char	test2[] = "hihi";
	memset(test1, -200, 4);
	ft_memset(test2, -200, 4);
	printf("%s\n", test1);
	printf("%s\n", test2);
	printf("%p\n", memset(test1, -200, 4));
	printf("%p\n", ft_memset(test1, -200, 4));
}
*/
