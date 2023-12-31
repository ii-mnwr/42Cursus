/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthodi <mthodi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:18:20 by mthodi            #+#    #+#             */
/*   Updated: 2023/12/23 21:42:27 by mthodi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned long int num, int type)
{
	char	*character;
	int		count;

	count = 0;
	character = "0123456789abcdef";
	if (type)
		character = "0123456789ABCDEF";
	if (num >= 16)
	{
		count += ft_hex(num / 16, type);
	}
	count += ft_putchar(character[num % 16]);
	return (count);
}
