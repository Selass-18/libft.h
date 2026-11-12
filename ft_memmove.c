/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaitihy <idaitihy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:38:06 by idaitihy          #+#    #+#             */
/*   Updated: 2026/11/02 13:50:50 by idaitihy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*i;
	const unsigned char	*j;

	i = (unsigned char *)dest;
	j = (const unsigned char *)src;
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			i[n] = j[n];
		}
	}
	else
	{
		while (n > 0)
		{
			*i = *j;
			i++;
			j++;
			n--;
		}
	}
	return (dest);
}
