/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 19:24:16 by abhousse          #+#    #+#             */
/*   Updated: 2021/11/11 18:04:30 by abhousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t count)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	k = 0;
	while (src[k] != '\0')
		k++;
	if (count <= i)
		k = k + count;
	else
		k = k + i;
	j = 0;
	while (src[j] != '\0' && i + 1 < count)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (k);
}
