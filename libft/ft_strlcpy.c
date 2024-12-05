/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 01:59:21 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/15 19:58:17 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	int	c;

	c = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[c] && dstsize > 1)
	{
		dest[c] = src[c];
		c++;
		dstsize--;
	}
	dest[c] = '\0';
	return (ft_strlen(src));
}
/*
int main(void)
{
    char    arr[] = "hi42kay";
    char    arr1[7];
    char    arr2[7];
    printf("%zu\n", strlcpy(arr1, arr, 1));
    printf("%s\n", arr1);
    printf("%zu\n", ft_strlcpy(arr2, arr, 1));
    printf("%s\n", arr2);
}
*/
