/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:00:18 by mlauer            #+#    #+#             */
/*   Updated: 2017/11/17 14:19:48 by mlauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int i;

	if (s == NULL)
		return ;
	i = ft_strlen(s);
	while (i > 0)
	{
		s[i] = '\0';
		i--;
	}
	s[i] = '\0';
}