/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 05:54:35 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/04 05:54:36 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*p;

	if (!lst)
		return (0);
	i = 0;
	p = lst;
	while (p)
	{
		i++;
		p = p->next;
	}
	return (i);
}
/*
#include <stdio.h>

int main ()
{
	t_list p1;
	t_list p2;
	t_list p3;
	p1.content = "my name is ";
	p1.next = &p2;

	p2.content = "simon and i am ";
	p2.next = &p3;

	p3.content = "21 :)";
	p3.next = NULL;
	printf ("%d", ft_lstsize(NULL));
}
*/
