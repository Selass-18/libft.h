/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaitihy <idaitihy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 12:36:21 by idaitihy          #+#    #+#             */
/*   Updated: 2026/11/04 16:22:00 by idaitihy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count);
}

static char	*get_word(char const *s, int start, int end)
{
	int		i;
	int		len;
	char	*arr;

	len = end - start;
	arr = malloc((len + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		arr[i] = s[start + i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

static void	my_free(char **res, int i)
{
	while (i > 0)
	{
		i--;
		free(res[i]);
	}
	free(res);
}

static int	fill_word(char **res, char const *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		res[j] = get_word(s, start, i);
		if (res[j] == NULL)
			return (my_free(res, j), 0);
		j++;
	}
	res[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	if (s == NULL)
		return (NULL);
	words = count_word(s, c);
	res = malloc((words + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	if (!fill_word(res, s, c))
		return (NULL);
	return (res);
}
