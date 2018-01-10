/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:43:31 by mlauer            #+#    #+#             */
/*   Updated: 2017/11/17 17:53:36 by mlauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s != NULL)
	{
		i = 0;
		str = ft_strnew(len);
		if (str == NULL)
			return (NULL);
		while (i < len && s[start])
			str[i++] = s[start++];
		return (str);
	}
	return (NULL);
}
