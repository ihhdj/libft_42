/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihhadjal <ihhadjal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:55:33 by ihhadjal          #+#    #+#             */
/*   Updated: 2024/11/10 18:57:50 by ihhadjal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	res;
	int	flag;

	i = 0;
	res = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!flag)
			{
				res++;
				flag = 1;
			}
		}
		else
			flag = 0;
		i++;
	}
	return (res);
}

static char	*fill_str_with(char const *s, int start, int end)
{
	char	*fill;
	int		i;

	i = 0;
	fill = malloc(sizeof(char) * (end - start + 1));
	if (!fill)
		return (NULL);
	while (start < end)
		fill[i++] = s[start++];
	fill[i] = 0;
	return (fill);
}

char	**ft_split(char const *s, char c)
{
	char		**split;
	int			size;
	int			i;
	int			end;
	int			start;

	i = 0;
	start = 0;
	size = count_words(s, c);
	split = malloc(sizeof(char *) * (size + 1));
	if (!split)
		return (NULL);
	while (i < size)
	{
		while (s[start] == c && s[start])
			start++;
		end = start + 1;
		while (s[end] != c && s[end])
			end++;
		split[i] = fill_str_with(s, start, end);
		start = end + 1;
		i++;
	}
	split[i] = NULL;
	return (split);
}