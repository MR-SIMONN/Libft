/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:21:36 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/05 19:51:42 by moel-hai         ###   ########.fr       */
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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	del(void *content)
{
	free(content);
}

void	*increment(void *content)
{
	int	*new_content = malloc(sizeof(int));
	*new_content = *(int *)content + 1;
	return (new_content);
}

int	main(void)
{
	t_list	*list;
	t_list	*new_list;
	t_list	*node;
	int		*val1 = malloc(sizeof(int));
	int		*val2 = malloc(sizeof(int));
	int		*val3 = malloc(sizeof(int));
	*val1 = 1;
	*val2 = 2;
	*val3 = 3;

	list = ft_lstnew(val1);
	list->next = ft_lstnew(val2);
	list->next->next = ft_lstnew(val3);

	new_list = ft_lstmap(list, increment, del);

	node = new_list;
	while (node)
	{
		printf("%d\n", *(int *)(node->content));
		node = node->next;
	}

	ft_lstclear(&list, del);
	ft_lstclear(&new_list, del);
	return (0);
}
