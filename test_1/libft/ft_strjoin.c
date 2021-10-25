#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;

	i = 0;
	new = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
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

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*newstr;
// 	int		i;
// 	int		len;
//
// 	i = 0;
// 	if (!s1 || !s2)
// 		return (NULL);
// 	len = ft_strlen(s1) + ft_strlen(s2);
// 	newstr = (char *)malloc((len + 1) * sizeof(char));
// 	if (!newstr)
// 		return (NULL);
// 	while (*s1 != '\0')
// 		newstr[i++] = *(s1++);
// 	while (*s2 != '\0')
// 		newstr[i++] = *(s2++);
// 	newstr[i] = '\0';
// 	return (newstr);
// }