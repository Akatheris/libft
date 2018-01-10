/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:10:31 by mlauer            #+#    #+#             */
/*   Updated: 2017/11/13 15:46:56 by mlauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *p;

	if (len == 0)
		return (b);
	p = (unsigned char *)b;
	while (len)
	{
		*p = (unsigned char)c;
		p++;
		len--;
	}
	return (b);
}
