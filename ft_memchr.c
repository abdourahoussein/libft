/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 08:17:10 by abhousse          #+#    #+#             */
/*   Updated: 2021/11/20 17:37:03 by abhousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ch = (char ) c;
	ptr = (unsigned char *) s;
	while (i < n)
	{
		if (ptr[i] == ch)
			return (&ptr[i]);
		i++;
	}
	return (0);
}
