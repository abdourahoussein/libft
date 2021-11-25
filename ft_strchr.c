/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:38:03 by abhousse          #+#    #+#             */
/*   Updated: 2021/11/20 19:50:49 by abhousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)str;
	i = 0;
	if (ch == '\0')
		return (&ptr[ft_strlen(ptr)]);
	while (i < ft_strlen(ptr))
	{
		if (ptr[i] == (unsigned char)ch)
			return (&ptr[i]);
		i++;
	}
	return (0);
}
