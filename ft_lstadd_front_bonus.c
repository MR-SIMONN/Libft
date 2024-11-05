/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 04:23:25 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/04 04:23:26 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new || !(*lst))
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
#include <stdlib.h>


int main ()
{
	char str[] = "first of all ";
	t_list *t = ft_lstnew(str);
	t_list p1;
	t_list p2;
	t_list p3;p1.content = "my name is ";
	p1.next = &p2;
	t_list *p = &p1;
	t_list **ptr = &p;

	p1.content = "my name is ";
	p1.next = &p2;

	p2.content = "simon and i am ";
	p2.next = &p3;

	p3.content = "21 :)";
	p3.next = NULL;


	ft_lstadd_front(ptr, t);
	while (p)
	{
		printf ("%s", p->content);
		p = p->next;
	}
	free(t);
}
*/
