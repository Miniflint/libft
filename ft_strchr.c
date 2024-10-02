/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:58:16 by trgoel            #+#    #+#             */
/*   Updated: 2024/10/02 18:58:17 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	x;

	x = 0;
	while (x < ft_strlen(s) + 1)
	{
		if (s[x] == (char)c)
			return ((char *)&s[x]);
		x++;
	}
	return (NULL);
}
