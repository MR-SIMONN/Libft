/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:11:19 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/02 21:59:39 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (((char *)s)[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	if (((char *)s)[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (0);
}
