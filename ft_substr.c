/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:59:08 by abhousse          #+#    #+#             */
/*   Updated: 2021/11/20 23:01:49 by abhousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	int		i;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		start = ft_strlen(s);
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	i = 0;
	a = malloc(sizeof(char) * (len + 1));
	if (a == NULL)
		return (0);
	while (s[start] != '\0' && len > 0)
	{
		a[i] = s[start];
		start++;
		i++;
		len--;
	}
	a[i] = '\0';
	return (a);
}
