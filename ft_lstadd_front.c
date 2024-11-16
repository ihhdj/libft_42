/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihhadjal <ihhadjal@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:00:26 by ihhadjal          #+#    #+#             */
/*   Updated: 2024/11/16 10:57:38 by ihhadjal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new -> next = *lst;
		*lst = new;
	}
}

// int main(void)
// {
// 	t_list *first = ft_lstnew("premier");
// 	t_list *second = ft_lstnew("deuxieme");
// 	t_list *last = ft_lstnew("dernier");
// 	t_list *nv = ft_lstnew("number 1");	
// 	first -> next = second;
// 	second -> next = la
// 	ft_lstadd_front((t_list **)first, nv);
// 	printf("%s",(char *)first);
// 	free(first);
// 	free(second);
// 	free(last);
// 	free(nv);
// }