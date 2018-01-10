/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:04:29 by mlauer            #+#    #+#             */
/*   Updated: 2017/11/17 15:05:37 by mlauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int y;

	i = 0;
	if (needle[0] == 0)
		return ((char*)haystack);
	while (haystack[i])
	{
		y = 0;
		if (haystack[i + y] == needle[y])
		{
			while (haystack[i + y] == needle[y])
			{
				if (needle[y + 1] == '\0')
					return ((char*)&haystack[i]);
				y++;
			}
		}
		i++;
	}
	return (NULL);
}
