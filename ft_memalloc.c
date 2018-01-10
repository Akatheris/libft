/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:47:52 by mlauer            #+#    #+#             */
/*   Updated: 2017/11/14 10:53:26 by mlauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *b;

	if ((b = (void *)malloc(sizeof(b) * size)) == NULL)
		return (NULL);
	b = ft_memset(b, 0, size);
	return (b);
}
