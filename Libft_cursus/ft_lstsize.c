/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthodi <mthodi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:36:16 by mthodi            #+#    #+#             */
/*   Updated: 2023/11/26 12:15:47 by mthodi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

#include <stdio.h>

int	main(void)
{
	t_list	*head = NULL;
	t_list	*node1 = ft_lstnew("Node 1");
	t_list	*node2 = ft_lstnew("Node 12");
	t_list	*node3 = ft_lstnew("Node 3");

	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	printf("Lst size : %d\n", ft_lstsize(head));
	free(node1);
	free(node2);
	free(node3);
	return (0);
}

// #include "stdio.h"
// int main(void)
// {
//     // Create some elements
// 	t_list *head = ft_lstnew("test0");
//     t_list *node1 = ft_lstnew("test1");
//     t_list *node2 = ft_lstnew("test2");
//     t_list *node3 = ft_lstnew("test3");

// 	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node3);
// 	printf("size is %d\n", ft_lstsize(head));
// 	free(head);
// 	free(node1);
// 	free(node2);
// 	free(node3);
//     return 0;
// }