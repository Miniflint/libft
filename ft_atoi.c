/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:12:15 by tgoel             #+#    #+#             */
/*   Updated: 2021/10/20 10:59:46 by tgoel            ###   ########.fr       */
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
