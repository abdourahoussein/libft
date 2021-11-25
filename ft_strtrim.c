/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 01:09:39 by abhousse          #+#    #+#             */
/*   Updated: 2021/11/21 01:20:26 by abhousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(char s, char *set)
{
	int		i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*s;
	char	*st;
	char	*a;
	int		j;

	if (!s1)
		return (0);
	i = 0;
	s = (char *)s1;
	st = (char *)set;
	j = ft_strlen(s);
	while (s != '\0' && count(s[i], st))
		i++;
	while (s != '\0' && count(s[j - 1], st))
		j--;
	a = ft_substr(s, i, (j - i));
	return (a);
}
