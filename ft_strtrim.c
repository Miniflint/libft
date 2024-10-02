/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:59:16 by trgoel            #+#    #+#             */
/*   Updated: 2024/10/02 18:59:17 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		x;
	int		y;

	if (!set || !s1)
		return (NULL);
	x = 0;
	y = ft_strlen(s1);
	while (s1[x] && ft_strchr(set, s1[x]))
		x++;
	while (y > x && ft_strchr(set, s1[y]))
		y--;
	trim = ft_substr((char *)(s1 + x), 0, (y - x + 1));
	return (trim);
}
