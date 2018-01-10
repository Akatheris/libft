/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:35:11 by mlauer            #+#    #+#             */
/*   Updated: 2017/11/17 10:47:28 by mlauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int len;
	unsigned int i;

	i = 0;
	len = ft_strlen(s1);
	while (n > i && s2[i] != 0)
	{
		s1[len] = s2[i];
		len++;
		i++;
	}
	s1[len] = '\0';
	return (s1);
}
