/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:17:41 by tgoel             #+#    #+#             */
/*   Updated: 2021/11/06 12:16:33 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	len_helper(unsigned int len)
{
	if (len >= 1000000000)
		return (10);
	else if (len >= 100000000)
		return (9);
	else if (len >= 10000000)
		return (8);
	else if (len >= 1000000)
		return (7);
	else if (len >= 100000)
		return (6);
	else if (len >= 10000)
		return (5);
	else if (len >= 1000)
		return (4);
	else if (len >= 100)
		return (3);
	else if (len >= 10)
		return (2);
	return (1);
}

char	*ft_conv(long n, char *array, int x)
{
	array[x] = '\0';
	while (n >= 0)
	{
		x--;
		array[x] = (n % 10) + '0';
		if (n < 10)
			break ;
		n = n / 10;
	}
	return (array);
}

char	*ft_itoa(int n)
{
	char	*array;
	int		x;
	int		sign;
	long	get_n;

	get_n = n;
	array = malloc(sizeof(char) * (len_helper(n) + 1));
	if (!array)
		return (NULL);
	sign = 1;
	if (get_n < 0)
		sign = -1;
	get_n *= sign;
	x = len_helper(get_n);
	if (sign == -1)
	{
		x += 1;
		array[0] = '-';
	}
	array = ft_conv(get_n, array, x);
	if (!array)
		return (NULL);
	return (array);
}
