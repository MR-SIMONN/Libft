/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:47:51 by moel-hai          #+#    #+#             */
/*   Updated: 2024/10/22 11:51:06 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
	size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
	size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
	int	ft_strncmp(const char *s1, const char *s2, size_t n);
	int	ft_tolower(int c);
	int	ft_toupper(int c);
#endif
