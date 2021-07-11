#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = ft_strlen(s) + (char *)s;
	while (str >= s)
	{
		if ((char)c == *str)
			return (str);
		str--;
	}
	return (NULL);
}
