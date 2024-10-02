/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:58:32 by trgoel            #+#    #+#             */
/*   Updated: 2024/10/02 18:58:33 by trgoel           ###   ########.fr       */
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
