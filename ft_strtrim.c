/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 23:44:17 by thninh            #+#    #+#             */
/*   Updated: 2019/11/11 02:35:07 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_is_exist(char c, char *set_c)
{
	int				i;

	i = 0;
	while (set_c[i])
	{
		if (set_c[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t		len_trim(char *s, char *se)
{
	size_t			c;
	size_t			i;
	size_t			lens;

	i = 0;
	lens = ft_strlen(s);
	while (ft_is_exist(s[i], se))
		i++;
	c = i;
	if (s[i] != '\0')
	{
		i = lens - 1;
		while (ft_is_exist(s[i], se))
		{
			i--;
			c++;
		}
	}
	return (lens - c);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	char			*trim;
	size_t			len;
	size_t			i;
	size_t			j;

	trim = NULL;
	i = 0;
	j = 0;
	len = 0;
	if (s1)
	{
		len = len_trim((char *)s1, (char *)set);
		trim = (char *)malloc(sizeof(*trim) * len + 1);
	}
	if (!(s1 && trim))
		return (NULL);
	while (ft_is_exist(s1[i], (char *)set))
		i++;
	while (j < len)
		trim[j++] = s1[i++];
	trim[j] = '\0';
	return (trim);
}
