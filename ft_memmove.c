/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:23:36 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/09 01:07:46 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst > src)
	{
		while (len--)
			d[len] = s[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main ()
// {
// 	// char *d = NULL;
// 	// char s[] = "simon is happy";

// 	char *a = "ss";
// 	memmove(a, a, -1);
// 	// ft_memmove(a, a, -1);
// 	// printf("%s\n", ft_memmove(d, s, 30));
// 	// printf("%s\n", memmove(d, s, 30));
// }

