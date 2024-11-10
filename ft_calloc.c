/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 01:05:37 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/10 04:30:56 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*z;
	size_t	l;

	l = count * size;
	if (count && (l / count) != size)
		return (NULL);
	z = malloc(l);
	if (!z)
		return (NULL);
	ft_bzero(z, l);
	return (z);
}
