/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 22:14:03 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/03 03:03:29 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
// char    fttoupper(unsigned int d, char c)
// {
//     unsigned char    a;
//     a = c;
//     d = 0;
//     if (a <= 'z' && a >= 'a')
//     {
//         a -= 32;
//         return (a);
//     }
//     return (a);
// }
// #include <stdio.h>
// int    main(void)
// {
//     char p[] = "saadoux";
//     char *s;
//     s = ft_strmapi(p, fttoupper);
//     if (s == NULL)
//         printf("The allocation Failed ! ");
//     printf("%s", s);
// }
