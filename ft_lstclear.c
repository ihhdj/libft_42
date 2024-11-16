/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihhadjal <ihhadjal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:10:44 by ihhadjal          #+#    #+#             */
/*   Updated: 2024/11/16 10:35:44 by ihhadjal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*list;

	if (*lst)
	{
		list = *lst;
		while (list)
		{
			temp = list -> next;
			ft_lstdelone(list, del);
			list = temp;
		}
		*lst = NULL;
	}
}