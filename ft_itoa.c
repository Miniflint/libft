/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgoel <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:57:09 by trgoel            #+#    #+#             */
/*   Updated: 2024/10/03 17:42:33 by trgoel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(int nbr)
{
	int				len;
	unsigned int	n;

	len = 0;
	if (nbr < 0)
	{
		len += 1;
		n = nbr * -1;
	}
	else
		n = nbr;
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len + 1);
}

void	ft_putnbr_str(unsigned int nbr, char *new_arr, int index)
{
	if (nbr > 9)
		ft_putnbr_str(nbr / 10, new_arr, index - 1);
	new_arr[index - 1] = nbr % 10 + '0';
}

char	*ft_itoa(int n)
{
	char			*new_arr;
	int				len;
	unsigned int	nb;

	len = get_len(n);
	new_arr = (char *)malloc(sizeof(char) * len + 1);
	if (!new_arr)
		return (NULL);
	new_arr[len] = 0;
	if (n < 0)
	{
		nb = n * -1;
		new_arr[0] = '-';
	}
	else
		nb = n;
	ft_putnbr_str(nb, new_arr, len);
	return (new_arr);
}
