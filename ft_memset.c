/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:14:37 by thninh            #+#    #+#             */
/*   Updated: 2019/11/08 07:17:08 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cur;

	i = 0;
	cur = (unsigned char *)s;
	while (i < n)
	{
		cur[i] = (unsigned char)c;
		i++;
	}
	return ((void *)cur);
}
