/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 04:39:50 by tgoel             #+#    #+#             */
/*   Updated: 2021/11/03 20:24:04 by tgoel            ###   ########.fr       */
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
