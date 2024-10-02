/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:59:00 by trgoel            #+#    #+#             */
/*   Updated: 2024/10/02 18:59:01 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	if (n == 0)
		return (0);
	while (x < n || s1[x] != '\0' || s2[x] != '\0')
	{
		if (s1[x] != s2[x])
			return ((unsigned char)s1[x] - s2[x]);
		else if (s1[x] == '\0' || s2[x] == '\0')
			return (0);
		else if (x == n - 1)
			return (0);
		x++;
	}
	return (0);
}
