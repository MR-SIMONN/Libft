/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:21:36 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/13 15:55:22 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*node_p;

	if (!lst || !f || !del)
		return (NULL);
	p = NULL;
	while (lst)
	{
		node_p = ft_lstnew(NULL);
		if (!node_p)
		{
			ft_lstclear(&p, del);
			return (NULL);
		}
		node_p->content = f(lst->content);
		ft_lstadd_back(&p, node_p);
		lst = lst->next;
	}
	return (p);
}
