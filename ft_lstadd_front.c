/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c 	                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 20:37:58 by abhousse          #+#    #+#             */
/*   Updated: 2021/11/19 17:43:10 by abhousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst == NULL && alst == NULL)
		return ;
	else
	{
		new->next = *alst;
		*alst = new;
	}
}
