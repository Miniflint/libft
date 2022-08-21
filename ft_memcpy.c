/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:43:49 by tgoel             #+#    #+#             */
/*   Updated: 2021/10/21 11:40:27 by tgoel            ###   ########.fr       */
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
