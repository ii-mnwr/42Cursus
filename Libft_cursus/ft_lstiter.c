/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthodi <mthodi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 22:31:20 by mthodi            #+#    #+#             */
/*   Updated: 2023/11/26 12:48:30 by mthodi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = (t_list *)lst;
	if (temp && f)
	{
		while (temp)
		{
			f(temp->content);
			temp = temp->next;
		}
	}
}

#include <stdio.h>
void	function(void *item)
{
	item = item + 2;
}
int	main(void)
{
	t_list	*node1 = ft_lstnew("NODE 1");
	t_list	*node2 = ft_lstnew("NODE 2");
	t_list	*node3 = ft_lstnew("NODE 3");
	t_list	*head = NULL;

	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	ft_lstiter(head, &function);
	printf("%s\n", node1->content);
	printf("%s\n", node2->content);
	printf("%s\n", node3->content);
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
