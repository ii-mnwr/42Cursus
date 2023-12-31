/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthodi <mthodi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 20:21:18 by mthodi            #+#    #+#             */
/*   Updated: 2023/12/23 21:46:49 by mthodi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *ptr)
{
	int		count;

	ft_putstr("0x");
	count = 2;
	if (ptr == 0)
	{
		ft_putstr("0");
		count += 1;
	}
	else
		count += ft_hex((unsigned long int)ptr, 0);
	return (count);
}
