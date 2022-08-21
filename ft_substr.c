/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:35:17 by tgoel             #+#    #+#             */
/*   Updated: 2021/11/12 14:24:06 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (!s)
		return (NULL);
	substr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!substr)
		return (NULL);
	while (s[x])
	{
		if (len > y && start <= x)
		{
			substr[y] = s[x];
			y++;
		}
		x++;
	}
	substr[y] = '\0';
	return (substr);
}
