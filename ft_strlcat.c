/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:32:41 by tgoel             #+#    #+#             */
/*   Updated: 2021/10/14 02:51:34 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//i have no clue what strlcat is supposed to do :/
// size_t	ft_strlcat(char *dst, const char *src, size_t n)
// {
// 	size_t src_len;
// 	size_t dst_len;

// 	src_len = ft_strlen(src);
// 	dst_len = ft_strlen(dst) - 1;
// 	if (n >= dst_len)
// 		return (src_len + n);
// 	if (src_len > n - dst_len)
// 	{
// 		ft_memcpy(dst+dst_len, src, src_len + 1);
//         dst[dst_len - 1] = '\0';
// 	}
// 	return (dst_len + src_len);
// }
size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (n <= len_d)
		return (n + len_s);
	i = 0;
	while (dst[i] && i < n - 1)
		i++;
	while (*src && i < n - 1)
		dst[i++] = *(src++);
	dst[i] = '\0';
	return (len_d + len_s);
}
