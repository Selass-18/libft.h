/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaitihy <idaitihy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:53:43 by idaitihy          #+#    #+#             */
/*   Updated: 2026/10/25 18:03:18 by idaitihy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;
	t_list			*current;

	if (!lst)
		return (0);
	i = 1;
	current = lst;
	while (current->next != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
