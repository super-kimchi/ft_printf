/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:04:56 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/28 13:25:30 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		c;
	t_list	*nextnode;

	c = 0;
	nextnode = lst;
	while (nextnode)
	{
		nextnode = nextnode->next;
		c++;
	}
	return (c);
}
/*
int	main(void)
{
	t_list *test = ft_lstnew("hi");

	printf("%p %s %p\n", test, (char *)test->content, test->next);
	printf("%d\n", ft_lstsize(test));
	t_list *second = ft_lstnew("42 kay");
	printf("%p %s %p\n", second, (char *)second->content, second->next);
	ft_lstadd_front(&test, second);
	printf("%p next: %p nextnext: %p\n", test, test->next, test->next->next);
	printf("%d\n", ft_lstsize(test));
}
*/
