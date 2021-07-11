#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		res_len;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	res_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(sizeof(char) * res_len);
	if (str == NULL)
		return (NULL);
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = 0;
	return (str);
}
