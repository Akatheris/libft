/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 15:41:04 by mlauer            #+#    #+#             */
/*   Updated: 2017/11/21 13:51:31 by mlauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		*ft_strback(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	str[i] = '\n';
	str[i + 1] = '\0';
	ft_putstr(str);
	return (0);
}

void			ft_print_words_tables(char **tab)
{
	int z;
	int y;

	y = 0;
	z = 0;
	while (tab[z] != 0)
	{
		y++;
		if (tab[z][y] == '\0' && tab[z] != 0)
		{
			ft_strback(tab[z]);
			z++;
			y = 0;
		}
	}
}
