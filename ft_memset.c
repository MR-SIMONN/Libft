/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 06:30:53 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/08 09:07:35 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*bb;

	bb = (unsigned char *)b;
	i = 0;
	while (i < len)
		bb[i++] = (unsigned char)c;
	return (b);
}
// int main ()
// {
// 	int r = 0;
// 	unsigned char res = (unsigned char)r;
	
// }