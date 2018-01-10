/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:41:44 by mlauer            #+#    #+#             */
/*   Updated: 2017/11/21 14:05:47 by mlauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t y;
	size_t lens;
	size_t lend;

	i = 0;
	y = 0;
	lens = ft_strlen(src);
	lend = ft_strlen(dst);
	if (size <= lend)
		return (lens + size);
	while (dst[i] && i < (size - 1))
		i++;
	while (src[y] && i < (size - 1))
		dst[i++] = src[y++];
	dst[i] = '\0';
	return (lend + lens);
}
