/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 06:37:48 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/27 06:34:58 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	str_size(char const *s1, char const *set, int i)
{
	size_t	size;
	int		rev_i;

	rev_i = ft_strlen(s1) - 1;
	while (i < rev_i && ft_strchr(set, s1[rev_i]))
		rev_i--;
	if (i > rev_i)
		size = 0;
	else
		size = rev_i - i + 1;
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	size_t	size;

	if (ft_strlen(s1) == 0)
	{
		result = (char *)malloc(1);
		if (!result)
			return (NULL);
		*result = 0;
		return (result);
	}
	i = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	size = str_size(s1, set, i);
	result = (char *)malloc(size + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1 + i, size + 1);
	return (result);
}
/*
int	main(void)
{	
	char	str[] = "";
	printf("%s\n", ft_strtrim("lorem ipsum dolor sit amet", "te"));
	printf("%p %p %s\n", str, ft_strtrim(str, "te"),ft_strtrim(str, "te"));
	printf("%p %s\n", ft_strtrim("  \t \t \n   \n\n\n\t", 
	" \n\t"),ft_strtrim("  \t \t \n   \n\n\n\t", " \n\t"));
}
*/
