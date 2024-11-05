/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:33:59 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/04 18:59:04 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*str;

	if (!s)
		return (0);
	if (start >= ft_strlen (s))
	{
		str = malloc (1);
		if (!str)
			return (NULL);
		*str = '\0';
		return (str);
	}
	if (len > ft_strlen (s + start))
		len = ft_strlen (s + start);
	i = 0;
	str = malloc (len + 1);
	if (!str)
		return (0);
	while (i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
