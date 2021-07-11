#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dest;
	size_t	len;

	len = 0;
	while (dst[len] && len < dstsize)
		len++;
	len_dest = len;
	while (src[len - len_dest] && (len + 1 < dstsize))
	{
		dst[len] = src[len - len_dest];
		len++;
	}
	if (len_dest < dstsize)
		dst[len] = 0;
	return (len_dest + ft_strlen(src));
}
