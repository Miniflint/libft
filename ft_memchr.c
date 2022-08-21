/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 09:48:57 by tgoel             #+#    #+#             */
/*   Updated: 2021/10/21 11:01:50 by tgoel            ###   ########.fr       */
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
