#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	sub = malloc(len + 1);
	i = 0;
	if (!sub)
		return (NULL);
	while ((i < len) && (*s))
	{
		sub[i++] = s[start++];
	}
	return (sub);
}
