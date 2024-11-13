/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 08:31:51 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/13 16:32:50 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ifchar(char *str, char c)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] == c)
			return (1);
		a++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		j;
	int		k;
	char	*p;
	int		i;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return ((char *)s1);
	k = ft_strlen(s1);
	while (s1[j] && ft_ifchar((char *)set, s1[j]))
		j++;
	while (j < k && ft_ifchar((char *)set, s1[k - 1]))
		k--;
	p = malloc(sizeof(char) * (k - j + 1));
	if (p == NULL)
		return (NULL);
	while (j < k)
	{
		p[i] = s1[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
