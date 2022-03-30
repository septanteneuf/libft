/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy@student.42lausanne.ch              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:05:34 by bbourcy           #+#    #+#             */
/*   Updated: 2021/11/12 11:05:52 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	sizelst;

	sizelst = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		sizelst++;
		lst = lst->next;
	}
	return (sizelst);
}
