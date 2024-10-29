/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:01:02 by moel-hai          #+#    #+#             */
/*   Updated: 2024/10/29 17:24:52 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	unsigned char	*ss1 = (unsigned char *)s1;
	unsigned char	*ss2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (ss1[i] && ss2[i] && ss1[i] == ss2[i] && i < (n - 1))
		i++;
	return (ss1[i] - ss2[i]);
}

int main() {
    char str1[] = "abcdef";
    char str2[] = "abcdef";
    char str3[] = "abcdeg";
    char str4[] = "abcde";
    char str5[] = "";
    char str6[] = "a";
    char str7[] = {0, 1, 2, 3, 4};
    char str8[] = {0, 1, 2, 3, 5};

    struct {
        const char *desc;
        const void *s1;
        const void *s2;
        size_t n;
        int expected_ft;
        int expected_original;
    } tests[] = {
        {"Identical strings", str1, str2, 6, ft_memcmp(str1, str2, 6), memcmp(str1, str2, 6)},
        {"Different last char", str1, str3, 6, ft_memcmp(str1, str3, 6), memcmp(str1, str3, 6)},
        {"First string shorter", str1, str4, 5, ft_memcmp(str1, str4, 5), memcmp(str1, str4, 5)},
        {"Empty strings", str5, str5, 0, ft_memcmp(str5, str5, 0), memcmp(str5, str5, 0)},
        {"One empty, one non-empty", str5, str6, 1, ft_memcmp(str5, str6, 1), memcmp(str5, str6, 1)},
        {"One non-empty, one empty", str6, str5, 1, ft_memcmp(str6, str5, 1), memcmp(str6, str5, 1)},
        {"Zero comparison bytes", str1, str2, 0, ft_memcmp(str1, str2, 0), memcmp(str1, str2, 0)},
        {"Binary data equal", str7, str7, 5, ft_memcmp(str7, str7, 5), memcmp(str7, str7, 5)},
        {"Binary data unequal", str7, str8, 5, ft_memcmp(str7, str8, 5), memcmp(str7, str8, 5)}
    };

    for (int i = 0; i < sizeof(tests) / sizeof(tests[0]); i++) {
        printf("Test %d (%s):\n", i + 1, tests[i].desc);
        printf("Expected Output (Original memcmp): %d\n", tests[i].expected_original);
        printf("ft_memcmp Output: %d\n\n", tests[i].expected_ft);
    }
    return 0;