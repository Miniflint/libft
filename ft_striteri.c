/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:58:27 by trgoel            #+#    #+#             */
/*   Updated: 2024/10/02 18:58:28 by trgoel           ###   ########.fr       */
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
