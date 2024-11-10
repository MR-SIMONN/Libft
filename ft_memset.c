/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 06:30:53 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/10 04:29:27 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*b2;

	b2 = (unsigned char *)b;
	i = 0;
	while (i < len)
		b2[i++] = (unsigned char)c;
	return (b);
}
// #include <libc.h>
// int main()
// {
// 	ali x;
// 	printf("%lu", sizeof(ali));
// 	// x.c == -1337;
// 	// x.a == 2005;	
// }