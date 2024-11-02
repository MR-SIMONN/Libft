/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 08:31:51 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/02 22:10:20 by moel-hai         ###   ########.fr       */
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
// #include <stdio.h>
// int    main(void)
// {
//     char d[] = "     saad    afsaadaf    saad      ";
//     char s[] = "saad";
//     char *p;
//     int    a;
//     a = 0;
//     p = ft_strtrim(d, s);
//     while (p[a])
//     {
//         printf("%c", p[a]);
//         a++;
//     }
// }
// #include <stdio.h>
// int main ()
// {
//     const char str[] = "b3bola simo is happy b3bola";
//     const char s[] = "b3bola";
//     char *res = ft_strtrim(str, s);
//     printf ("%s\n", res);
//     free (res);
// }
