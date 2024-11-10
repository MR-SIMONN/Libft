/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:15:06 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/10 04:31:09 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dst == src)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
// #include <stdio.h>
// #include <string.h>

// int main ()
// {
// 	// char d[30];
// 	char s[] = "simon is happy";
// 	char *str = s + 3;
// 	// printf("%s\n", ft_memcpy(s + 3, s, sizeof(s)));
// 	printf("%s\n", memcpy(s + 3, s, sizeof(s) - 3));
// 	printf("%lu\n", sizeof(str));
// 	printf("%lu\n", sizeof(s));
// 	printf ("%s", str);
// }