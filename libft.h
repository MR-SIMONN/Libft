/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:47:51 by moel-hai          #+#    #+#             */
/*   Updated: 2024/10/30 01:32:35 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int		ft_atoi(const char *str);
// int		ft_isalnum(int c);
// int		ft_isalpha(int c);
// int		ft_isascii(int c);
// int		ft_isdigit(int c);
// int		ft_isprint(int c);
// void	ft_memcmp(const void *s1, const void *s2, size_t n);
// void	*memcpy(void *dst, const void *src, size_t n);
// void	*memmove(void *dst, const void *src, size_t len);
void	*memset(void *b, int c, size_t len);
// char	*ft_strchr(const char *s, int c);
// char	*ft_strdup(const char *s1);
// char	*ft_strjoin(int size, char **strs, char *sep);
// size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
//  size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
//  size_t	ft_strlen(const char *s );
// int		ft_strncmp(const char *s1, const char *s2, size_t n);
// char	*strnstr(const char *haystack, const char *needle, size_t len);
// char	*ft_strrchr(const char *s, int c);
void	*ft_calloc(size_t count, size_t size);
void	bzero(void *s, size_t n);
// int		ft_tolower(int c);
// int		ft_toupper(int c);

#endif
