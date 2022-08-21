/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 10:58:24 by tgoel             #+#    #+#             */
/*   Updated: 2021/12/06 11:40:55 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		x;
	int		len;
	char	*str;

	len = 0;
	while (s1[len])
		len++;
	str = (char *)malloc(sizeof(*str) * (len + 1));
	x = 0;
	while (x < len)
	{
		str[x] = s1[x];
		x++;
	}
	str[x] = '\0';
	return (str);
}
