#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	i;
	size_t	length;

	length = ft_strlen(src);
	dest = malloc(sizeof(char) * (length + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
