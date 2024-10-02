/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:58:37 by trgoel            #+#    #+#             */
/*   Updated: 2024/10/02 18:58:39 by trgoel           ###   ########.fr       */
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
