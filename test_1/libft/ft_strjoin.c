#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;

	i = 0;
	new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (NULL);
	while ((i++) < ft_strlen(s1))
		*(new++) = *(s1++);
	i = 0;
	while ((i++) < ft_strlen(s2))
		*(new++) = *(s2++);
	*new = '\0';
	return (new);
}
