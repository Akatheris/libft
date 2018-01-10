/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:40:52 by mlauer            #+#    #+#             */
/*   Updated: 2017/11/17 17:40:40 by mlauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t y;

	i = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[i] && i < len)
	{
		y = 0;
		if (haystack[i + y] == needle[y] && y < len)
		{
			while (haystack[i + y] == needle[y] && y + i < len)
			{
				if (needle[y + 1] == '\0')
					return ((char *)&haystack[i]);
				y++;
			}
		}
		i++;
	}
	return (NULL);
}
