#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	i = 0;
	b = (unsigned char *)src;
	a = (unsigned char *)dst;
	if (!dst && !src)
		return (a);
	while (n)
	{
		a[i] = b[i];
		if (b[i] == (unsigned char)c)
			return (dst + 1 + i);
		i++;
		n--;
	}
	return (NULL);
}
