/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:38:30 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/08 10:06:30 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;
	size_t	all_len;

	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	all_len = (src_len + dst_len);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (dst[i])
		i++;
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (all_len);
}
// #include <string.h>
// #include <stdio.h>
// int main ()
// {
// 	char dest[] = "simon";
// 	char *src = NULL;
// 	size_t size = 7;
// 	printf ("%zu\n", ft_strlcat(dest, src, size));
// 	printf ("%s\n", dest);
// // 	printf ("%lu\n", strlcat(dest, src, size));
// // 	printf ("%s\n", dest);
// }
