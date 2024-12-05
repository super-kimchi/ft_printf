/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:20:32 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/15 19:58:31 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dest_l;
	size_t	src_l;
	size_t	c;

	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	if (dstsize <= dest_l || dstsize == 0)
		return (src_l + dstsize);
	c = 0;
	while (src[c] && dest_l + c < dstsize - 1)
	{
		dest[dest_l + c] = src[c];
		c++;
	}
	dest[dest_l + c] = '\0';
	return (dest_l + src_l);
}
/*
int main(void)
{
    char arr[10] = "AAAAA";
    char arr1[10] = "AAA";
    char arr2[10] = "AAA";

    char src[] = "hi42kay";
    printf("my %zu\n", ft_strlcat(arr, src, 2));
    printf("my %s\n", arr);
    printf("real %zu\n", strlcat(arr, src, 2));
    printf("real %s\n\n", arr);

    printf("my %zu\n", ft_strlcat(arr1, src, 10));
    printf("my %s\n", arr1);
    printf("real %zu\n", strlcat(arr2, src, 10));
    printf("real %s\n", arr2);

	char arr3[40];
	memset(arr3, 'A', 15);
	printf("result %zu \n", ft_strlcat(arr3, "lorem ipsum dolor sit amet", 5));
	printf("%s", arr3);
}
*/
