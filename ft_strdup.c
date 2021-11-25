/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:23:23 by abhousse          #+#    #+#             */
/*   Updated: 2021/11/21 17:04:20 by abhousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*a;
	size_t	i;

	i = 0;
	if (!src)
		return (NULL);
	a = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (a == NULL)
		return (0);
	while (src[i] != '\0')
	{
		a[i] = src[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
