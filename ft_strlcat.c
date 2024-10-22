#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;
	size_t	sum_of_arrays;
	char	*arr;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	arr = (char *)src;
	j = ft_strlen(dst);
	i = 0;
	if (dstsize > j)
		sum_of_arrays = j + ft_strlen(src);
	if (dstsize <= j)
		return (dstsize + ft_strlen(src));
	while (arr[i] && j < dstsize - 1)
	{
		dst[j] = arr[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (sum_of_arrays);
}
