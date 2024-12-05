/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 05:04:57 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/22 08:01:55 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*start;

	start = (unsigned char *)s;
	while (n > 0)
	{
		if ((unsigned char) c == *start)
			return (start);
		start++;
		n--;
	}
	return (NULL);
}
/*
int	main(void)
{
	int	arr[1] = {-2147483648};
	int	arr1[1] = {-128};
	printf("%p %p\n", arr, ft_memchr(arr, 128, 4));
	printf("%p %p\n", arr1, ft_memchr(arr1, 1, 4));
	printf("int min %02x %02x %02x %02x\n",
 *(unsigned char *)arr, 
 *((unsigned char *)arr + 1),
 *((unsigned char *)arr + 2),
 *((unsigned char *)arr + 3));
	printf("-128 %02x %02x %02x %02x",
 *(unsigned char *)arr1,
 *((unsigned char *)arr1 + 1),
 *((unsigned char *)arr1 + 2), *((unsigned char *)arr1 + 3));
}
*/
