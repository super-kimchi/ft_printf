/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:24:50 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/16 04:31:16 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*start;

	start = (unsigned char *)s;
	while (n > 0)
	{
		*start = 0;
		start++;
		n--;
	}
}
/*
#include <string.h>

int	main(void)
{
	int	test[4] = {11,11,11,11};
	char test1[] = "hi42kay";

	bzero(test, sizeof(test));
	for(int i = 0; i < 4; i++)
		printf("%d\n", test[i]);
	printf("%c", '\n');
	ft_bzero(test, sizeof(test));
	for(int i = 0; i < 4; i++)
		printf("%d\n", test[i]);

	printf("test1 \n");
	for(int i = 0; i < (int) sizeof(test1); i++)
	{
		printf("%02x ", test1[i]);
	}
		printf("%c", '\n');
	ft_bzero(test1, 7);
	for(int i = 0; i < (int) sizeof(test1); i++)
	{
		printf("%02x ", test1[i]);
	}
		printf("%c", '\n');
	bzero(test1, 7);
	for(int i = 0; i < (int) sizeof(test1); i++)
	{
		printf("%02x ", test1[i]);
	}
		printf("%c", '\n');
}
*/
