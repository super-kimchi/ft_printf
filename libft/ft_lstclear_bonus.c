/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:50:52 by kyungkim          #+#    #+#             */
/*   Updated: 2024/12/02 16:38:43 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst || !(*lst) || !del)
		return ;
	while (*lst)
	{
		node = *lst;
		*lst = (*lst)->next;
		del(node->content);
		free(node);
	}
}
/*
void	delete_c(void *con)
{
	(void) con;
	return ;
}

int	main(void)
{
	t_list *start = ft_lstnew("hi");
	t_list *start1 = ft_lstnew("42");
	t_list *start2 = ft_lstnew("kay");
	ft_lstadd_back(&start, start1);
	ft_lstadd_back(&start, start2);
	
	while (start)
	{
		printf("%p\n", start);
		start = start->next;
	}
	
	ft_lstclear(&start, delete_c);
	printf("after clear %p", start);

}
*/
