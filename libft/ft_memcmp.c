/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 04:27:42 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/21 04:53:43 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char *) s1;
	src = (unsigned char *) s2;
	while (n > 0)
	{
		if (*dest != *src)
			return (*dest - *src);
		dest++;
		src++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	char	arr1[]="hi42kay";
	char	arr2[]="hi43kay";

	printf("%d",ft_memcmp(arr1, arr2, 3));
	printf("%d",memcmp(arr1, arr2, 4));
}
*/
