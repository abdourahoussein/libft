/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 08:43:24 by abhousse          #+#    #+#             */
/*   Updated: 2021/11/21 16:21:52 by abhousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	unsigned int	i;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (ptr1 && ptr2 && ptr1[i] == ptr2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char) ptr1[i] - (unsigned char) ptr2[i]);
}
