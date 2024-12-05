/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:56:16 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/22 08:03:56 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((char) c == '\0')
		return ((char *)(s + i));
	while (i > 0)
	{
		i--;
		if (s[i] == (char) c)
			return ((char *)(s + i));
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str1[] = "hy42kay";
	printf("%p %p %ld", str1, ft_strrchr(str1, 'y'),
	str1 - ft_strrchr(str1, 'y'));
	printf("%p %p %ld", str1, ft_strrchr(str1, '\0'),
	str1 - ft_strrchr(str1, '\0'));
	printf("%p %p %ld", str1, ft_strrchr(str1, 'h'),
	str1 - ft_strrchr(str1, 'h'));
	

}
*/
