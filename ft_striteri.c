/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:40:45 by tgoel             #+#    #+#             */
/*   Updated: 2021/11/01 17:05:25 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	x;
	int	check_len;

	x = 0;
	check_len = ft_strlen(s);
	if (s && f)
	{
		while (s[x] && x < check_len)
		{
			f(x, &s[x]);
			x++;
		}
	}
}
