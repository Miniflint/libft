/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:35:21 by tgoel             #+#    #+#             */
/*   Updated: 2021/10/21 11:30:53 by tgoel            ###   ########.fr       */
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
