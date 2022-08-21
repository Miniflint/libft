/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 05:05:19 by tgoel             #+#    #+#             */
/*   Updated: 2021/11/03 22:08:28 by tgoel            ###   ########.fr       */
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
