/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 04:18:08 by thninh            #+#    #+#             */
/*   Updated: 2019/11/24 12:42:50 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		len;

	if (!src)
		return (0);
	len = ft_strlen(src);
	i = 0;
	if (len == 0)
		dst[i] = src[i];
	while (i < size - 1 && i < len && size != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (i > 0 && len > 0)
		dst[i] = '\0';
	return (len);
}
