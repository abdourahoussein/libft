/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:11:19 by abhousse          #+#    #+#             */
/*   Updated: 2021/11/21 16:24:36 by abhousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	j = ft_strlen(ptr);
	if (!c || !s)
		return (&ptr[ft_strlen(ptr)]);
	while (j > 0)
	{
		if (ptr[j - 1] == (unsigned char)c)
			return (&ptr[j - 1]);
		j--;
	}
	return (0);
}
