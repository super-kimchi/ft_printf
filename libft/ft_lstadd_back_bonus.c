/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 18:14:05 by kyungkim          #+#    #+#             */
/*   Updated: 2024/12/02 09:50:16 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnode;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	lastnode = *lst;
	while (lastnode->next)
		lastnode = lastnode->next;
	lastnode->next = new;
}
/*
int	main(void)
{
	t_list *test = ft_lstnew("42");
	t_list **start = &test;
	t_list *new = ft_lstnew("kay");

	printf("%s\n", (char *)(*start)->content);
	printf("%p\n", (*start)->next);
	ft_lstadd_back(start, new);
	printf("%s\n", (char *)(*start)->content);
	printf("%p\n", (*start)->next);
	
}
*/
