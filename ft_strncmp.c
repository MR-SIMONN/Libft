#include "libft.h"

int	ft_strncmp(const char *s1,const char *s2, size_t n)
{
	size_	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}