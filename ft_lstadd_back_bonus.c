/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 06:23:35 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/04 06:23:36 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (!lst || !new || !(*lst))
		return ;
	p = ft_lstlast(*lst);
	p->next = new;
}
/*
#include <stdio.h>

int main ()
{
	t_list p1;
	t_list p2;
	t_list p3;
	t_list *p;

	p = &p1;

	p1.content = "my name is ";
	p1.next = &p2;

	p2.content = "simon and i am ";
	p2.next = &p3;

	p3.content = "21 :)";
	p3.next = NULL;
	ft_lstadd_back(&p, ft_lstnew("hello"));
	printf ("%d", ft_lstsize(&p1));
}
*/
