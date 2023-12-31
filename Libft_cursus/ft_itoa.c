/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthodi <mthodi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:22:48 by mthodi            #+#    #+#             */
/*   Updated: 2023/11/23 14:50:41 by mthodi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n >= 10)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		count;
	int		lastdigit;
	int		number;

	number = n;
	count = count_digits(n);
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		n = -n;
	result = (char *)malloc(count + 1);
	if (result == NULL)
		return (NULL);
	result[count] = '\0';
	while (count > 0)
	{
		lastdigit = n % 10;
		result[--count] = '0' + lastdigit;
		n = n / 10;
	}
	if (number < 0)
		result[0] = '-';
	return (result);
}
