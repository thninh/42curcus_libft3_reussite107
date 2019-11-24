/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 01:47:25 by thninh            #+#    #+#             */
/*   Updated: 2019/11/24 08:19:42 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_separator(char s, char c)
{
	if (s == c)
		return (1);
	if (s == '\0')
		return (1);
	return (0);
}

static int		ft_cnt_parts(char *s, char c)
{
	int			cnt;
	int			i;

	i = 0;
	cnt = 0;
	while (s[i] != '\0')
	{
		if (is_separator(s[i + 1], c) == 1 && is_separator(s[i], c) == 0)
			cnt++;
		i++;
	}
	return (cnt);
}

static void		ft_tab2(char *dst, char *src, char c)
{
	int			i;

	i = 0;
	while (is_separator(src[i], c) == 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

static void		ft_tab(char **tab, char *str, char c)
{
	int			i;
	int			j;
	int			w;

	w = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_separator(str[i], c) == 1)
			i++;
		else
		{
			j = 0;
			while (is_separator(str[i + j], c) == 0)
				j++;
			if (!(tab[w] = (char*)malloc(sizeof(char) * (j + 1))))
			{
				ft_free_str(tab, w);
				return ;
			}
			ft_tab2(tab[w], str + i, c);
			i += j;
			w++;
		}
	}
}

char			**ft_split(char const *s, char c)
{
	char		**t;
	int			nbw;

	if (!s)
		return (NULL);
	nbw = ft_cnt_parts((char *)s, c);
	if (!(t = (char **)malloc(sizeof(char*) * (nbw + 1))))
		return (NULL);
	t[nbw] = NULL;
	ft_tab(t, (char *)s, c);
	return (t);
}
