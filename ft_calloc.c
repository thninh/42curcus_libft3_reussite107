/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thninh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:06:35 by thninh            #+#    #+#             */
/*   Updated: 2019/11/24 01:02:16 by thninh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t nmemb, size_t size)
{
	void	*elem;

	elem = (void *)malloc(size * nmemb);
	if (!elem)
		return (NULL);
	ft_bzero(elem, nmemb * size);
	return (elem);
}
