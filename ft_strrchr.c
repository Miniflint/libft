/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:59:11 by trgoel            #+#    #+#             */
/*   Updated: 2024/10/03 22:05:30 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		x;
	char	*str;

	str = (char *)s;
	x = ft_strlen(str);
	while (x >= 0)
	{
		if ((char)c == str[x])
			return (&str[x]);
		x--;
	}
	return (NULL);
}
