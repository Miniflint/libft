/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:55:17 by trgoel            #+#    #+#             */
/*   Updated: 2024/10/02 18:55:39 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	x;
	int	res;
	int	sign;

	x = 0;
	res = 0;
	sign = 1;
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == ' ')
		x++;
	if ((str[x] == '-') || (str[x] == '+'))
	{
		if (str[x] == '-')
			sign = -1;
		x++;
	}
	while (ft_isdigit(str[x]))
	{
		res = res * 10 + str[x] - '0';
		x++;
	}
	return (res * sign);
}
