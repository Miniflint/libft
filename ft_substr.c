/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:59:22 by trgoel            #+#    #+#             */
/*   Updated: 2024/10/02 18:59:23 by trgoel           ###   ########.fr       */
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
