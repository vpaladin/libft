#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s1;

	i = 0;
	j = 0;
	s1 = (char *)haystack;
	if (needle[i] == 0)
		return (s1);
	while (s1[i] && i < len)
	{
		if (s1[i] == needle[0])
		{
			while (s1[j] && s1[i + j] == needle[j] && i + j < len)
			{
				if (needle[j + 1] == 0)
					return (&s1[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
