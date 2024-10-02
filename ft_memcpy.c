/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:57:24 by trgoel            #+#    #+#             */
/*   Updated: 2024/10/02 18:57:31 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	x;

	x = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (n <= 0 || n >= 4294967295)
		return (dst);
	else
	{
		while (x < n)
		{
			((char *)dst)[x] = ((char *)src)[x];
			x++;
		}
		return (dst);
	}
}
