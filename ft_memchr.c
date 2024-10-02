/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:57:16 by trgoel            #+#    #+#             */
/*   Updated: 2024/10/02 18:57:17 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	x;

	if (!s)
		return (NULL);
	x = 0;
	while (x < n)
	{
		if (*(unsigned char *)&s[x] == (unsigned char)c)
			return ((void *)&s[x]);
		x++;
	}
	return (NULL);
}
