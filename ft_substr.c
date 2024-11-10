/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihhadjal <ihhadjal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:08:15 by iheb              #+#    #+#             */
/*   Updated: 2024/11/10 10:53:59 by ihhadjal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	size_t	s_len;

	i = 0;
	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (NULL);
	if (start + len >= s_len)
		len = s_len - start;
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (sub == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

// int main(void)
// {
//     char s[] = "ashdphrasesjsj";
//     char *sub = ft_substr(s, 4, 6);
//     if(sub != NULL)
//     {
//         printf("%s", sub);
//     }
//     free(sub);
//     return 0;
// }