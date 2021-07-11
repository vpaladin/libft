#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	size_t			len;
	unsigned int	i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	map = malloc(sizeof(char) * (len + 1));
	if (!map)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		map[i] = f(i, s[i]);
		i++;
	}
	map[i] = 0;
	return (map);
}
