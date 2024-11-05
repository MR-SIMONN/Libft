/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:21:36 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/05 19:24:48 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_failed(t_list **a, void (*del)(void *))
{
	ft_lstclear(a, del);
    return (NULL);
}

t_list    *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*p;
	t_list	*prev_p;

	if (!lst || !f || !del)
		return (NULL);
    p = ft_lstnew(f(lst->content));
	if (!p)
		return (ft_failed (&p, del));
	prev_p = p;
	lst = lst->next;
    while (lst)
    {
        p->next = ft_lstnew(f(lst->content));
        if (!(p->next))
			return (ft_failed (&prev_p, del));
        lst = lst->next;
        p = p->next;
    }
	p->next = NULL;
	return (prev_p);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main ()
// {
// 	char str[] = "first of all ";
// 	t_list *t = ft_lstnew(str);
// 	t_list p1;
// 	t_list p2;
// 	t_list p3;
	
// 	t_list *p2;

// 	t_list *p = &p1;
	
// 	p1.content = "my name is ";
// 	p1.next = &p2;


// 	p1.content = "my name is ";
// 	p1.next = &p2;

// 	p2.content = "simon and i am ";
// 	p2.next = &p3;

// 	p3.content = "21 :)";
// 	p3.next = NULL;

	
	
// 	p2 = ft_lstmap(p, ft_tolower, free)
// 	while (p)
// 	{
// 		printf ("%s", p->content);
// 		p = p->next;
// 	}
// 	free(t);
// }
