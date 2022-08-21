/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 03:49:04 by tgoel             #+#    #+#             */
/*   Updated: 2022/01/30 18:19:36 by tgoel            ###   ########.fr       */
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
