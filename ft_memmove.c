/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:05:54 by mlauer            #+#    #+#             */
/*   Updated: 2017/11/21 17:32:01 by mlauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			*ft_inf(void *dest, const void *src, size_t n)
{
	while (n-- > 0)
		((char *)dest)[n] = ((char *)src)[n];
	return (dest);
}

static void			*ft_sup(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char*)dest)[i] = ((char *)src)[i];
		++i;
	}
	return (dest);
}

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest < src)
		return (ft_sup(dest, src, n));
	else
		return (ft_inf(dest, src, n));
	return (0);
}
