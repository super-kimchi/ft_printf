/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:51:38 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/27 12:49:17 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*seperator(char const *s, int sep)
{
	char	*str;
	int		c;
	int		i;

	c = 0;
	while (s[c] != sep && s[c])
		c++;
	str = (char *)malloc(c + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

static int	count(char const *s, char c)
{
	int	i;
	int	sep_c;

	i = 0;
	sep_c = 0;
	if (ft_strlen(s) == 0)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			sep_c++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (sep_c);
}

static char	**error_free(char **arr, int arr_c)
{
	while (--arr_c >= 0)
		free(arr[arr_c]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		sep_c;
	int		arr_c;

	sep_c = count(s, c);
	arr = (char **)malloc((sep_c + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	arr_c = 0;
	while (arr_c < sep_c)
	{
		while (*s == c)
			s++;
		arr[arr_c] = seperator(s, c);
		if (!arr[arr_c])
			return (error_free(arr, arr_c));
		s = s + ft_strlen(arr[arr_c]);
		arr_c++;
	}
	arr[arr_c] = 0;
	return (arr);
}
/*
int	main(void)
{
//	char	**test = ft_split("hi 42 kay", ' ');
//	char	**test1 = ft_split("", ' ');
	char	**test2 = ft_split("xxxxxxxxhello!", ' ');

//	for (int i = 0; i < 4; i++)
//		printf(":%s: ", test[i]);
//	printf("\n");
//	for (int i = 0; i < 1; i++)
//		printf(":%s: ", test1[i]);
//	printf("\n");
	for (int i = 0; i < 2; i++)
		printf(":%s: ", test2[i]);
}
*/
