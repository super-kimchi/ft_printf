/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:43:01 by kyungkim          #+#    #+#             */
/*   Updated: 2024/12/02 16:35:10 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int	main(void)
{
	t_list *first = ft_lstnew("test");
	t_list *second = ft_lstnew("test2");
	printf("%p %s\n",first, (char *)first->content);
	printf("%p %s\n",second, (char *)second->content);
	ft_lstadd_front(&first, second);
	printf("%p %s\n %p",first, (char *)first->content, first->next);
}
*/
