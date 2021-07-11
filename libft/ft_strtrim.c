#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	len;

	i = 0;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	while (len > i && ft_strchr(set, s1[len - 1]))
	{
		len--;
	}
	res = ft_substr(s1, i, len - i);
	return (res);
}
