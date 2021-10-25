#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (len > ft_strlen(s) - start)
 		len = ft_strlen(s) - start;
	sub = (char *)malloc(len + 1);
	i = 0;
	if (!sub)
		return (NULL);
	while ((i < len) && (*s))
	{
		sub[i++] = s[start++];
	}
	sub[i] = '\0';
	return (sub);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char			*newstr;
// 	unsigned int	i;
//
// 	i = 0;
// 	if (!s)
// 		return (NULL);
// 	if (ft_strlen(s) < start)
// 		len = 0;
// 	if (len > ft_strlen(s) - start)
// 		len = ft_strlen(s) - start;
// 	newstr = (char *)malloc((len + 1) * sizeof(char));
// 	if (!newstr)
// 		return (NULL);
// 	while (i < len && s[start] != '\0')
// 		newstr[i++] = s[start++];
// 	newstr[i] = '\0';
// 	return (newstr);
// }
