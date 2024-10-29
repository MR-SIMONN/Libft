/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 06:30:53 by moel-hai          #+#    #+#             */
/*   Updated: 2024/10/29 16:55:11 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*bb;

	bb = (unsigned char *)b;
	i = 0;
	while (i < len)
		bb[i++] = (unsigned char)c;
	return (b);
}
