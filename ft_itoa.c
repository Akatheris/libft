/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:38:46 by mlauer            #+#    #+#             */
/*   Updated: 2017/11/17 17:43:13 by mlauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		ft_isnegative(int *n)
{
	if (*n < 0)
	{
		*n *= (-1);
		return (1);
	}
	return (0);
}

char			*ft_itoa(int n)
{
	int		len;
	int		save;
	int		neg;
	char	*str;

	neg = ft_isnegative(&n);
	save = n;
	len = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	while (save /= 10)
		len++;
	len += neg;
	if ((str = (char*)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	str[len--] = '\0';
	while (len != -1)
	{
		str[len] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
