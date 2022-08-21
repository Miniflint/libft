/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:38:37 by tgoel             #+#    #+#             */
/*   Updated: 2021/11/03 21:36:35 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		x;
	char	*cpy;

	x = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	cpy = (char *)malloc(sizeof(char *) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s1, ft_strlen(s1) + 1);
	ft_strlcat(cpy, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (cpy);
}
