/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 04:59:17 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/21 05:40:22 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	d_i;
	size_t	s_i;

	d_i = 0;
	if (ft_strlen(little) == 0)
		return ((char *) big);
	while (big[d_i] && len > 0)
	{
		s_i = 0;
		while (len - s_i > 0 && big[d_i + s_i] && big[d_i + s_i] == little[s_i])
		{
			if (s_i == ft_strlen(little) - 1)
				return ((char *) &big[d_i]);
			s_i++;
		}
		d_i++;
		len--;
	}
	return (NULL);
}
/*
int	main(void)
{	
	char	str[] = "hi42kay";
	printf("%p\n", str);
	printf("%p %s\n",  ft_strnstr(str, "kay", 7), ft_strnstr(str, "kay", 7));
	printf("%p %s\n",  ft_strnstr(str, "kaya", 7), ft_strnstr(str, "kaya", 7));
	printf("%p %s\n",  ft_strnstr(str, "k", 7), ft_strnstr(str, "k", 7));
	printf("%p %s\n",  ft_strnstr(str, "", 7), ft_strnstr(str, "", 7));
	printf("%p %s\n",  ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30),
			ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	printf("%p\n", ft_strnstr("abcdefgh", "abc", 2));
}
*/
