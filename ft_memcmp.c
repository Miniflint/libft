/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoel <tgoel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:39:38 by tgoel             #+#    #+#             */
/*   Updated: 2021/10/19 18:48:25 by tgoel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			x;

	x = 0;
	ptr1 = (unsigned char *) s1;
	ptr2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (*ptr1 == *ptr2 && x + 1 < n)
	{
		ptr1++;
		ptr2++;
		x++;
	}
	return (*ptr1 - *ptr2);
}
