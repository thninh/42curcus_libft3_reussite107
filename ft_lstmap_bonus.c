/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 08:32:15 by thninh            #+#    #+#             */
/*   Updated: 2019/11/24 01:42:50 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*res;
	t_list		*tmp;
	t_list		*list;

	tmp = NULL;
	res = NULL;
	if (!f || !lst)
		return (NULL);
	list = lst;
	while (list->next)
	{
		tmp = ft_lstnew(f(list->content));
		if (tmp)
			ft_lstadd_back(&res, tmp);
		else
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		list = list->next;
	}
	ft_lstadd_back(&res, tmp);
	return (res);
}
