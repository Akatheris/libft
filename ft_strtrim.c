/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 14:29:24 by mlauer            #+#    #+#             */
/*   Updated: 2017/11/21 15:53:37 by mlauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		strt;
	size_t		end;
	size_t		len;
	char		*s1;

	if (s == NULL)
		return (NULL);
	strt = 0;
	end = ft_strlen(s) - 1;
	len = 0;
	while (s[strt] == ' ' || s[strt] == '\n' || s[strt] == '\t')
		strt++;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	if (end == 0 && strt == 0)
		return (ft_strdup(s));
	if (strt == ft_strlen(s))
		return (ft_strdup("\0"));
	if ((s1 = ft_strnew(end - strt + 1)) == NULL)
		return (NULL);
	while (strt <= end)
		s1[len++] = s[strt++];
	return (s1);
}
