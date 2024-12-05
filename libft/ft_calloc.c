/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 08:21:46 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/22 08:02:53 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (nmemb == 0 || size == 0)
	{
		result = malloc(0);
		if (!result)
			return (NULL);
		return (result);
	}
	result = malloc(nmemb * size);
	if (!result)
		return (NULL);
	ft_bzero(result, nmemb * size);
	return (result);
}
/*
#include <unistd.h>
int	main(void)
{
	char	*arr;

	arr = ft_calloc(10,4);
	for(int i = 0; i < 40;i++)
		printf("%p %x\n", &arr[i], arr[i]);
	printf("%p %x", calloc(10, 0), *((char *)calloc(10, 0)));
	printf("%p %x\n", ft_calloc(10, 0), *((char *)ft_calloc(10, 0)));
	//printf("%p %x\n", 
	ft_calloc(SIZE_MAX, SIZE_MAX), 
	*((char *)ft_calloc(SIZE_MAX, SIZE_MAX)));
	printf("%p %x\n", calloc(SIZE_MAX, SIZE_MAX),
 	*((char *)calloc(SIZE_MAX, SIZE_MAX)));
}
*/
