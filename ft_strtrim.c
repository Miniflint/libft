/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:27:57 by tgoel             #+#    #+#             */
/*   Updated: 2021/10/21 11:51:23 by tgoel            ###   ########.fr       */
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
