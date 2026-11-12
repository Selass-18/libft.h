/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaitihy <idaitihy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 21:37:04 by idaitihy          #+#    #+#             */
/*   Updated: 2026/11/02 13:34:02 by idaitihy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*i;

	i = (const unsigned char *)s;
	while (n > 0)
	{
		if (*i == (unsigned char)c)
			return ((void *)i);
		i++;
		n--;
	}
	return (NULL);
}
