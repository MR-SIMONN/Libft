/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:39:20 by moel-hai          #+#    #+#             */
/*   Updated: 2024/10/29 16:51:32 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	if (dstsize == 0)
		return (j);
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}
// void test_ft_strlcpy() 
// {
//     char dest[20];

//     // Test 1: Regular case
//     const char *src1 = "Hello, World!";
//     size_t len1 = ft_strlcpy(dest, src1, sizeof(dest));
//     printf("Test 1: %s | Length: %zu (Expected: Hello, World! | %zu)\n",
//     dest, len1, ft_strlen(src1));

//     // Test 2: Destination size smaller than source
//     const char *src2 = "Hello, World!";
//     size_t len2 = ft_strlcpy(dest, src2, 5);
//     printf("Test 2: %s | Length: %zu (Expected: Hell | %zu)\n",
//     dest, len2, ft_strlen(src2));

//     // Test 3: Destination size equal to source length
//     const char *src3 = "Hello";
//     size_t len3 = ft_strlcpy(dest, src3, ft_strlen(src3) + 1);
//     printf("Test 3: %s | Length: %zu (Expected: Hello | %zu)\n",
//     dest, len3, ft_strlen(src3));

//     // Test 4: Zero destination size
//     const char *src4 = "Hello, World!";
//     size_t len4 = ft_strlcpy(dest, src4, 0);
//     printf("Test 4: %s | Length: %zu (Expected: (empty) | %zu)\n", 
//     dest, len4, ft_strlen(src4));

//     //Test 5: NULL source
//     char *dest5 = NULL;
//     size_t len5 = ft_strlcpy(dest5, NULL, sizeof(dest));
//     printf("Test 5: Length: %zu (Expected: 0)\n", len5);

//     // Test 6: NULL destination
//     const char *src6 = "Hello";
//     size_t len6 = ft_strlcpy(NULL, src6, sizeof(dest));
//     printf("Test 6: Length: %zu (Expected: %zu)\n",
//     len6, ft_strlen(src6));

//     // Test 7: Source is empty
//     const char *src7 = "";
//     size_t len7 = ft_strlcpy(dest, src7, sizeof(dest));
//     printf("Test 7: %s | Length: %zu (Expected: (empty) | 0)\n",
//     dest, len7);
// }

// int main() 
// {
//     test_ft_strlcpy();
//     return 0;
// }
