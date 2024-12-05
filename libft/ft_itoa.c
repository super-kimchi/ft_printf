/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 01:39:29 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/27 05:36:40 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int	c;

	if (n < 0)
		c = 2;
	else
		c = 1;
	while (n / 10 != 0)
	{
		c++;
		n /= 10;
	}
	return (c);
}

static void	int_to_str(char *str, long n, int i)
{
	if (i == 0)
	{
		if (str[i] != '-')
			str[i] = (n % 10) + '0';
		return ;
	}
	str[i] = (n % 10) + '0';
	return (int_to_str(str, n / 10, --i));
}

char	*ft_itoa(int n)
{
	int		c;
	char	*str;
	long	num;

	num = n;
	c = count(num);
	str = (char *)malloc(c + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	int_to_str(str, num, c - 1);
	str[c] = 0;
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(412));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(-2147483647));
	printf("%s\n", ft_itoa(-2147483648));
}
*/
