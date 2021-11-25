/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:40:44 by abhousse          #+#    #+#             */
/*   Updated: 2021/11/14 18:03:57 by abhousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		i;
	char	*a;
	char	*s1;

	if (!s)
		return (0);
	i = 0;
	s1 = (char *)s;
	a = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (a == NULL)
		return (0);
	while (s1[i] != '\0')
	{
		a[i] = f(i, s1[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}
