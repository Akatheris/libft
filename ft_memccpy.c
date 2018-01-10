/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:33:27 by mlauer            #+#    #+#             */
/*   Updated: 2017/11/21 17:26:44 by mlauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	if (src == NULL)
		return (NULL);
	i = 0;
	while (i < n && ((unsigned char *)src)[i] != (unsigned char)c)
	{
		((unsigned char*)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	if (i < n)
	{
		((unsigned char*)dst)[i] = ((unsigned char *)src)[i];
		return ((&((unsigned char *)dst)[i + 1]));
	}
	else
		return (NULL);
}
