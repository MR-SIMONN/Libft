/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:17:41 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/07 12:08:46 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	cc;

	if (c < 0 || c > 255)
		return (0);
	cc = (unsigned char)c;
	if ((cc >= 'a' && cc <= 'z') || (cc >= 'A' && cc <= 'Z'))
		return (1);
	return (0);
}
