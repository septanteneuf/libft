/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy@student.42lausanne.ch              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:07:26 by bbourcy           #+#    #+#             */
/*   Updated: 2021/11/12 11:07:37 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*el1;
	t_list	*el2;

	if (!lst)
		return ;
	el1 = *lst;
	while (el1)
	{
		del(el1->content);
		el2 = el1;
		el1 = el1->next;
		free(el2);
	}
	*lst = NULL;
}
