
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:56:31 by abhousse          #+#    #+#             */
/*   Updated: 2021/11/19 22:11:18 by abhousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_del(void *str)
{
	int i;

	unsigned char *ptr;
	ptr = (unsigned char *)str;
	while(ptr)
	{
		ptr[i] = 0;
		i++;
	}
}

void	ft_lstclear(t_list **lst, void (*del) (void*))
{
	t_list	*b;
	b = *lst;
	while (b)
	{
		ft_lstdelone(b, del);
		b = b->next;
	}
	(*lst) = NULL;
}

int main ()
{
	t_list	**begin, *temp, *A, *B, *C;
	temp = malloc(sizeof(t_list));
	A = malloc(sizeof(t_list));
	B = malloc(sizeof(t_list));
	C = malloc(sizeof(t_list));

	A->content = "allo";
	B->content = "allo";
	B->content = "allo";

	A->Next = B;
	B->Next = C;
	temp = *begin;


	ft_lstclear(&begin, &ft_del);
	printf("Should print...nothing.\n");
	tmp = begin;
	while (tmp)
	{
		printf("%i ", *((int*)tmp->content));
		tmp = tmp->next;
	}

	printf("\n");
	return (0);
}
