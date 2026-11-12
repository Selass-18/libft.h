/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaitihy <idaitihy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 23:35:26 by idaitihy          #+#    #+#             */
/*   Updated: 2026/10/16 23:51:04 by idaitihy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len_s;
	char	*arr;
	size_t	j;

	len_s = ft_strlen(s);
	j = 0;
	arr = malloc(len_s + 1);
	if (!arr)
		return (NULL);
	while (s[j] != '\0')
	{
		arr[j] = s[j];
		j++;
	}
	arr[j] = '\0';
	return (arr);
}
