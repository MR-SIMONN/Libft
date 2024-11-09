/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 01:50:10 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/09 01:06:19 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_cw(const char *str, char c)
{
	int	i;
	int	words;
	int	flag;

	i = 0;
	words = 0;
	flag = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			if (flag == 0)
			{
				words++;
				flag = 1;
			}
		}
		else
			flag = 0;
		i++;
	}
	return (words);
}

static void	free_all(char **s, int i)
{
	while (i--)
		free (s[i]);
	free (s);
}

static int	ft_word_len(char *str, int i, char c)
{
	int	word_len ;

	word_len = 0;
	while (str[i] && str[i] != c)
	{
		word_len++;
		i++;
	}
	return (word_len);
}

static char	*ft_stridup(char *s, size_t *i, char c)
{
	char	*str;
	int		j;
	int		index;

	index = *i;
	j = 0;
	str = malloc(sizeof(char) * (ft_word_len((char *)s, *i, c) + 1));
	if (!str)
		return (NULL);
	while (s[*i] && s[*i] != c)
	{
		str[j++] = s[*i];
		*i += 1;
	}
	str[j] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	k;
	char	**str;

	if (!s)
		return (NULL);
	(1) && (i = 0, k = 0, str = malloc (8 * (ft_cw(s, c) + 1)));
	if (!str)
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if (s[i] != c)
		{
			str[k] = ft_stridup((char *)s, &i, c);
			if (!str[k++])
				return (free_all(str, --k), NULL);
		}
		while (s[i] == c && s[i])
			i++;
	}
	return (str[k] = 0, str);
}

// int	main(void)
// {
// 	char	**result;
// 	// char str[] = "  simon   ";
// 	char	str[] = "hello";
// 	int		i = 0;
// 	result = ft_split(str, ' ');
// 	for(int i = 0;result[i];i++)
// 		printf("%s\n",result[i]);
// 	return (0);
// }