/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthodi <mthodi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:17:53 by mthodi            #+#    #+#             */
/*   Updated: 2023/11/18 21:28:01 by mthodi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*previous;
	t_list	*temp;

	if (lst && *lst && del)
	{
		previous = (t_list *)*lst;
		while (previous)
		{
			temp = previous->next;
			ft_lstdelone(previous, del);
			previous = temp;
		}
		*lst = NULL;
	}
}
