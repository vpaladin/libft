#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (len--)
	{
		if (*str++ == (unsigned char)c)
			return (--str);
	}
	return (NULL);
}
