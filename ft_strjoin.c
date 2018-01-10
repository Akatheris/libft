/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 14:03:31 by mlauer            #+#    #+#             */
/*   Updated: 2017/12/20 16:23:40 by mlauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	int			n;
	int			n2;
	char		*str;

	if (!(s1 == NULL && s2 == NULL))
	{
		n = -1;
		n2 = 0;
		i = ft_strlen(s1) + ft_strlen(s2);
		if ((str = ft_strnew(i)) == NULL)
			return (NULL);
		while (s1[++n])
			str[n] = s1[n];
		while (s2[n2])
		{
			str[n] = s2[n2];
			n++;
			n2++;
		}
		str[n] = '\0';
		return (str);
	}
	return (NULL);
}
