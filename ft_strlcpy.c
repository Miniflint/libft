/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:58:43 by trgoel            #+#    #+#             */
/*   Updated: 2024/10/02 18:58:44 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	src_size;

	src_size = ft_strlen(src);
	if (src_size + 1 < n)
	{
		ft_memcpy(dst, src, src_size + 1);
		dst[n - 1] = '\0';
	}
	else if (n == 0)
	{
		ft_memcpy(dst, src, 0);
		return (src_size);
	}
	else if (src_size != 0)
	{
		ft_memcpy(dst, src, n - 1);
		dst[n - 1] = '\0';
	}
	return (src_size);
}
