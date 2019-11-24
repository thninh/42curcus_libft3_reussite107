/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 23:37:27 by thninh            #+#    #+#             */
/*   Updated: 2019/11/08 07:18:51 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*concat_func(char *dst, const char *src)
{
	char		*s1;
	size_t		len;
	size_t		i;

	i = 0;
	s1 = (char *)src;
	len = ft_strlen((const char *)dst);
	if (*s1)
	{
		while (s1[i] != '\0')
		{
			dst[len + i] = s1[i];
			i++;
		}
		dst[len + i] = '\0';
	}
	return (dst);
}

char			*copy_func(char *dst, const char *src)
{
	int			i;
	char		*s2;

	i = 0;
	s2 = (char *)src;
	while (s2[i] != '\0')
	{
		dst[i] = s2[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char		*result;

	result = NULL;
	if (s1 && s2)
		result = (char *)malloc(sizeof(*result) * (ft_strlen(s1) +
					ft_strlen(s2)) + 1);
	if (result)
		concat_func(copy_func(result, s1), s2);
	return (result);
}
