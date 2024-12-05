/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:29:34 by kyungkim          #+#    #+#             */
/*   Updated: 2024/11/28 17:18:59 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lastnode;

	if (!lst)
		return (NULL);
	lastnode = lst;
	while (lastnode->next)
		lastnode = lastnode->next;
	return (lastnode);
}
/*
int	main(void)
{
	t_list *test = ft_lstnew("hi");
	t_list *second = ft_lstnew("42");
	t_list *third = ft_lstnew("kay");
	printf("%p %p %p\n", test, second, third);
	ft_lstadd_front(&third, second);
	ft_lstadd_front(&second, test);
	printf("%d\n", ft_lstsize(test));
	printf("first %p lastnode: %p\n", test, ft_lstlast(test));
	t_list *test2 = ft_lstnew("lastnode");
	printf("%p %p", test2, ft_lstlast(test2));

}
*/
