/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 03:16:12 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/22 05:49:25 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	size;

	if (start > ft_strlen(s))
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		*result = 0;
		return (result);
	}
	size = ft_strlen(s) - start;
	if (size > len)
		size = len;
	result = (char *)malloc(size + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s + start, size + 1);
	return (result);
}
/*
int	main(void)
{
//	char	str[] = "hi42kay";
//	printf("og %p new %p %s\n", str, ft_substr(str, 2, 5), ft_substr(str, 2, 5));
//	printf("og %p new %p %s\n", str, ft_substr(str, 7, 5), ft_substr(str, 7, 5));
	printf("test %s",ft_substr("hola", 0, -1));
}
*/
