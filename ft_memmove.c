/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:17:24 by thninh            #+#    #+#             */
/*   Updated: 2019/11/24 01:08:45 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (n == 0)
		return (dest);
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	n--;
	while (n > 0)
	{
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		n--;
	}
	((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
}
