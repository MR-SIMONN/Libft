/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 05:54:19 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/05 01:53:25 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;

	if (!lst)
		return (NULL);
	p = lst;
	while (p)
	{
		if (p-> next == NULL)
			return (p);
		p = p-> next;
	}
	return (p);
}

// #include <stdio.h>
// int main ()
// {
// 	t_list p1;
// 	t_list p2;
// 	t_list p3;
// 	t_list p4;

// 	p1.content = "my name is ";
// 	p1.next = &p2;

// 	p2.content = "simon and i am ";
// 	p2.next = &p3;

// 	p3.content = "happy :)";
// 	p3.next = &p4;

// 	p4.content = "last node";
// 	p4.next = NULL; 

// 	t_list *ptr = ft_lstlast(&p1);
// 	printf ("%s", ptr->content);
// }
