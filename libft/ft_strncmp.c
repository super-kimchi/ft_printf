/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 22:30:17 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/19 22:53:41 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n > 0)
	{
		if ((unsigned char) *s1 != (unsigned char) *s2)
			return ((unsigned char)*s1 - (unsigned char) *s2);
		n--;
		s1++;
		s2++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_strncmp("test\200","test\0", 6));
}
*/
