#include "libft.h"

char 	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if ((char)c == *str)
			return (str);
		str++;
	}
	if ((char)c == '\0')
		return (str);
	return (NULL);
}
