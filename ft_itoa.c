/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaitihy <idaitihy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 20:06:00 by idaitihy          #+#    #+#             */
/*   Updated: 2026/11/07 14:21:42 by idaitihy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long nbr)
{
	int	count;

	count = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

static char	*ft_array(long nbr, char *arr, int len)
{
	arr[len] = '\0';
	len--;
	while (nbr != 0)
	{
		arr[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	return (arr);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nbr;
	char	*arr;

	nbr = n;
	len = 0;
	if (nbr < 0)
	{
		len = 1;
		nbr = -nbr;
	}
	if (nbr == 0)
		len = 1;
	else
		len += ft_count(nbr);
	arr = malloc(len + 1);
	if (!arr)
		return (NULL);
	ft_array(nbr, arr, len);
	if (n < 0)
		arr[0] = '-';
	else if (n == 0)
		arr[0] = '0';
	return (arr);
}
