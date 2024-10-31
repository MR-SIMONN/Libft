/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:23:37 by moel-hai          #+#    #+#             */
/*   Updated: 2024/10/23 23:23:39 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	int	src_len;
	int	dest_len;

	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}

static char	*if_empty(void)
{
	char	*str;

	str = malloc(1);
	str[0] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		all_len;
	char	*s;
	int		i;

	if (!size)
		return (if_empty());
	i = 0;
	all_len = ft_strlen(sep) * (size - 1);
	while (i < size)
		all_len += ft_strlen(strs[i++]);
	s = malloc(sizeof(char) * all_len + 1);
	if (!s)
		return (NULL);
	s[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strlcat(s, strs[i]);
		if (i != size - 1)
			ft_strlcat(s, sep);
		i++;
	}
	s[all_len] = '\0';
	return (s);
}
