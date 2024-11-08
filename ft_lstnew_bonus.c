/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 03:08:57 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/05 01:43:24 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*s;

	s = (t_list *)malloc(sizeof(t_list *));
	if (!s)
		return (NULL);
	s->content = content;
	s->next = NULL;
	return (s);
}

/*
#include <stdio.h>

int main ()
{
	char str[] = "simo";
	t_list	a;
	a.content = str;
	a.next = ft_lstnew(a.content);
	t_list	*p = &a;
	while (p)
	{
		printf ("%s\n", p->content);
		p = p->next;
	}
}
*/