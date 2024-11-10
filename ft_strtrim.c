/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihhadjal <ihhadjal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:21:29 by ihhadjal          #+#    #+#             */
/*   Updated: 2024/11/10 18:33:09 by ihhadjal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	test(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (test(s1[start], set))
		start++;
	while (test(s1[end], set))
		end--;
	res = (char *)malloc(sizeof(char) * (end - start) + 2);
	if (!res)
		return (res);
	ft_strlcpy(res, &s1[start], end - start + 2);
	return (res);
}

// int main(void)
// {
// 	char *s1 = "aaaiheabaaa";
// 	char *set = "a";
// 	char *res = ft_strtrim(s1, set);
// 	printf("%s", res);
// 	free(res);
// 	return 0;	
// }