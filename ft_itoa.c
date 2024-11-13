/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:09:39 by moel-hai          #+#    #+#             */
/*   Updated: 2024/11/12 12:47:54 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	nbr_len(int nb)
{
	long	len;

	len = (nb <= 0);
	while (nb)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	temp;
	long	len;
	char	*str;

	temp = n;
	len = nbr_len (n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (temp < 0)
	{
		str[0] = '-';
		temp *= -1;
	}
	if (temp == 0)
		str[0] = '0';
	while (temp)
	{
		str[--len] = (temp % 10) + '0';
		temp /= 10;
	}
	return (str);
}
