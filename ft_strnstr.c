/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:23:49 by abhousse          #+#    #+#             */
/*   Updated: 2021/11/21 16:24:09 by abhousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	char	*str1;
	char	*str2;
	size_t	i;
	size_t	j;

	i = 0;
	str1 = (char *) s1;
	str2 = (char *) s2;
	if (str2[0] == '\0')
		return (str1);
	else if (str1[0] == '\0' && str2[0] == '\0')
		return (0);
	while (str1[i] != '\0')
	{
		j = 0;
		while (str1[i + j] == str2[j] && (j + i) < len)
		{
			if (str2[j + 1] == '\0')
				return (&str1[i]);
			j++;
		}
		i++;
	}
	return (0);
}
