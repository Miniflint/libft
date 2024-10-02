/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:59:05 by trgoel            #+#    #+#             */
/*   Updated: 2024/10/02 18:59:06 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	x;
	size_t	y;
	char	*res;

	res = (char *)haystack;
	x = 0;
	if (needle[0] == '\0')
		return (res);
	while (haystack[x] && x < n)
	{
		y = 0;
		while (needle[y] && res[x + y] && (res[x + y] == needle[y])
			&& (y + x) < n)
		{
			if (y == (size_t)(ft_strlen(needle) - 1))
				return (&res[x]);
			y++;
		}
		x++;
	}
	return (NULL);
}
