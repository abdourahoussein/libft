/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:46:21 by abhousse          #+#    #+#             */
/*   Updated: 2021/11/14 18:52:20 by abhousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void	*src, size_t size)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (src > dest)
		ft_memcpy(d, s, size);
	else if (src < dest)
	{
		while (size > 0)
		{
			d[size - 1] = s[size - 1];
			size--;
		}
	}
	return (d);
}
