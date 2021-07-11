#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	else
	{
		while (n--)
		{
			if (*str1 != *str2)
				return ((int)(*str1 - *str2));
			str1++;
			str2++;
		}
	}
	return (0);
}
