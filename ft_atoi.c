/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:23:59 by thninh            #+#    #+#             */
/*   Updated: 2019/11/24 01:01:44 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *nptr)
{
	long	neg;
	long	n;

	neg = 1;
	n = 0;
	while (*nptr == '\n' || *nptr == ' ' || *nptr == '\r' ||
			*nptr == '\v' || *nptr == '\f' || *nptr == '\t')
		nptr++;
	if (*nptr == '-')
		neg = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr && ft_isdigit(*nptr) == 1)
	{
		n = n * 10 + *nptr - 48;
		if (n < 0 && neg == 1)
			return (-1);
		if (n < 0 && neg == -1)
			return (0);
		nptr++;
	}
	return (neg * n);
}
