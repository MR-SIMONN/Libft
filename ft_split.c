/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 01:50:10 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/01 10:20:04 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static int	ft_cw(char *str, char c)
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

static char	*ft_strduup(char *s, int *i, char c)
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

void	free_all(char **s, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free (s[j++]);
		i++;
	}
	free (s);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	str = malloc(sizeof(char *) * (ft_cw((char *)s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if (s[i] != c)
			str[j++] = ft_strduup((char *)s, &i, c);
		if (!(str + j))
			free_all(str, j);
		else
			i++;
	}
	str[j] = 0;
	return (str);
}
/*
int	main(void)
{
	char	**result;
	char	str[] = "          Hello    this    is   a   test    string    
	with    multiple    spaces      ";
	int		i = 0;

	result = ft_split(str, ' ');

	// Print each word in the split result
	while (result[i])
	{
		printf("Word %d: %s\n", i, result[i]);
		free(result[i]);  // Free each word after printing
		i++;
	}
	free(result);  // Free the array of word pointers

	return (0);
}
*/
