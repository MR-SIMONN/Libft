/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:23:36 by moel-hai          #+#    #+#             */
/*   Updated: 2024/10/25 23:29:43 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (unsigned char)dst;
	s = (unsigned char)src;
	while (len--)
		d[len] = s[len];
	return (dst);
}
