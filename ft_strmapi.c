/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:24:12 by tgoel             #+#    #+#             */
/*   Updated: 2021/11/03 21:34:55 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*array;
	int		x;

	x = 0;
	array = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s || !f || !array)
		return (NULL);
	while (s[x])
	{
		array[x] = f(x, s[x]);
		x++;
	}
	array[x] = '\0';
	return (array);
}
