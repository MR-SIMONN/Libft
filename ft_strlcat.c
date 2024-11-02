/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:38:30 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/01 10:40:26 by moel-hai         ###   ########.fr       */
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
/*
int main ()
{
	char dest[50] = "";
	char *src = "lorem ipsum dolor sit amet";
	printf ("%zu\n", ft_strlcat(dest, src, 5));
		char dest1[50] = "";
	char *src1 = "lorem ipsum dolor sit amet";
	printf ("%lu", strlcat(dest1, src1, 20));
}
*/
