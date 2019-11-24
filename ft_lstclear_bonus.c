/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 08:12:59 by thninh            #+#    #+#             */
/*   Updated: 2019/11/24 00:52:52 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst && *lst && del)
	{
		while ((*lst)->next)
		{
			ft_lstdelone(*lst, del);
			*lst = (*lst)->next;
		}
		ft_lstdelone(*lst, del);
		*lst = NULL;
	}
}
