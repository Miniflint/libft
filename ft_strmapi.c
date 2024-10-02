/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:58:55 by trgoel            #+#    #+#             */
/*   Updated: 2024/10/02 18:58:56 by trgoel           ###   ########.fr       */
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
