/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:22:47 by abhousse          #+#    #+#             */
/*   Updated: 2021/11/16 21:15:26 by abhousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_nbr(int nb)
{
	int			i;
	long		n;

	n = nb;
	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		i;
	int		l;
	long	nb;

	i = 0;
	l = count_nbr(n);
	nb = n;
	a = malloc(sizeof(char) * (l + 1));
	if (a == NULL)
		return (0);
	a[l--] = 0;
	if (nb == 0)
		a[0] = '0';
	if (nb < 0)
	{
			nb = -nb;
			a[0] = '-';
	}
	while (nb > 0)
	{
		a[l--] = (nb % 10) + 48;
		nb /= 10;
	}
	return (a);
}
