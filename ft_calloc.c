/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 01:05:37 by moel-hai          #+#    #+#             */
/*   Updated: 2024/10/30 19:58:56 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*z;
	size_t	l;

	l = count * size;
	z = malloc(l);
	if (!z)
		return (NULL);
	ft_bzero(z, l);
}
/*
int main() {
    struct {
        const char *desc;
        size_t count;
        size_t size;
    } tests[] = {
        {"Zero count, zero size", 0, 0},
        {"Non-zero count, zero size", 5, 0},
        {"Zero count, non-zero size", 0, 5},
        {"Small array", 5, sizeof(int)},
        {"Large array", 1000, sizeof(double)},
        {"Maximum allocation test", SIZE_MAX / 2, 2} 
// Test near max allocation size
    };

    for (int i = 0; i < sizeof(tests) / sizeof(tests[0]); i++) {
        printf("Test %d (%s):\n", i + 1, tests[i].desc);

        void *ft_mem = ft_calloc(tests[i].count, tests[i].size);
        void *orig_mem = calloc(tests[i].count, tests[i].size);

        if (!ft_mem || !orig_mem) {
            printf("Memory allocation failed\n\n");
            free(ft_mem);
            free(orig_mem);
            continue;
        }

        int ft_zeroed = memcmp(ft_mem, orig_mem, tests[i].count * tests[i].size)
	   	== 0;

        printf("Expected Output (Original calloc zeroed): %s\n", 
		ft_zeroed ? "Yes" : "No");
        printf("ft_calloc Output: %s\n\n", ft_zeroed ? "Yes" : "No");

        free(ft_mem);
        free(orig_mem);
    }
    return 0;
}
*/
