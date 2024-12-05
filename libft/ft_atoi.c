/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 05:42:41 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/21 09:03:55 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	str_int(const char *nptr, unsigned int sum)
{
	if (!('0' <= *nptr && *nptr <= '9'))
		return (sum);
	sum *= 10;
	sum += *nptr - '0';
	return (str_int(++nptr, sum));
}

int	ft_atoi(const char *nptr)
{
	int	positive;

	positive = 1;
	while ((9 <= *nptr && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (*nptr == '-')
	{
		positive = -1;
		nptr++;
	}
	else if (*nptr == '+')
	{
		nptr++;
	}
	return (positive * str_int(nptr, 0));
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("    +42"));
	printf("%d\n", atoi("    +42"));
	
	printf("%d\n", ft_atoi("    -42"));
	printf("%d\n", atoi("    -42"));
	printf("%d\n", ft_atoi("    +2147483647"));
	printf("%d\n", atoi("    +2147483647"));
	printf("%d\n", ft_atoi("    -2147483648"));
	printf("%d\n", atoi("    -2147483648"));
	printf("%d\n", ft_atoi("    -21 47483648"));
	printf("%d\n", atoi("    -21 47483648"));
}
*/
