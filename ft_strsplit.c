/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:44:48 by mlauer            #+#    #+#             */
/*   Updated: 2017/11/21 15:07:50 by mlauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countwords(char const *s, char c)
{
	int		count;
	int		cter;
	int		i;

	count = 0;
	cter = 1;
	i = 0;
	while (s[i])
	{
		if (cter == 0 && s[i] == c)
			cter = 1;
		if (cter == 1 && s[i] != c)
		{
			cter = 0;
			count++;
		}
		i++;
	}
	return (count);
}

static int		ft_strlenw(char const *s, char c, int i)
{
	int		len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		countw;
	int		z;
	int		i;

	if (s == NULL)
		return (NULL);
	z = 0;
	i = 0;
	countw = ft_countwords(s, c);
	if ((tab = (char**)malloc(sizeof(char*) * countw + 1)) == NULL)
		return (NULL);
	while (countw--)
	{
		while (s[i] == c && s[i])
			i++;
		if ((tab[z] = ft_strsub(s, i, ft_strlenw(s, c, i))) == NULL)
			return (NULL);
		i += ft_strlenw(s, c, i);
		z++;
	}
	tab[z] = NULL;
	return (tab);
}
