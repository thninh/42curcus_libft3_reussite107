/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 03:42:13 by thninh            #+#    #+#             */
/*   Updated: 2019/11/10 20:31:56 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	n;
	char			*s1;

	n = 0;
	s1 = NULL;
	if (s)
		s1 = (char *)malloc(sizeof(*s1) * ft_strlen(s) + 1);
	if (s1 && s && f)
	{
		while (s[n])
		{
			s1[n] = f(n, (char)(s[n]));
			n++;
		}
		s1[n] = '\0';
	}
	return (s1);
}
