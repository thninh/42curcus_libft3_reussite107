/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 04:37:53 by thninh            #+#    #+#             */
/*   Updated: 2019/11/24 11:24:14 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		len;
	const char	*tmp;

	len = ft_strlen(s2);
	tmp = s1;
	if (len == 0)
		return ((char *)s1);
	while (*tmp && tmp + len <= s1 + n)
	{
		if (*tmp == *s2 && (ft_strncmp(tmp + 1, s2 + 1, len - 1) == 0))
			return ((char *)tmp);
		tmp++;
	}
	return (NULL);
}
