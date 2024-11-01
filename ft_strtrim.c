/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 08:31:51 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/01 08:31:52 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char *str, char *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && str[i] == set[j])
	{
		i++;
		j++;
	}
	return (i);
}

static int	rev_is_set(char *str, char *set)
{
	int	i;
	int	j;

	i = ft_strlen(str) - 1;
	j = ft_strlen(set) - 1;
	while (str[i] && str[i] == set[j] && j)
	{
		i--;
		j--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		i;
	int		j;
	int		len;

	if (!s1 || !set)
		return (NULL);
	s = malloc ((ft_strlen ((char *)s1) - (ft_strlen((char *)set) * 2)) + 1);
	if (!s)
		return (NULL);
	i = is_set((char *)s1, (char *)set);
	j = 0;
	len = rev_is_set((char *)s1, (char *)set);
	while (s1[i] && i < len)
		s[j++] = s1[i++];
	s[j] = '\0';
	return (s);
}
/*
int main ()
{
    const char str[] = "b3bola simo is happy b3bola";
    const char s[] = "b3bola";
    char *res = ft_strtrim(str, s);
    printf ("%s\n", res);
    free (res);
}
*/
