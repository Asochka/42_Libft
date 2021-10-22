#include "header.h"

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (i == maxlen - 1)
			return (maxlen);
		i++;
		s++;
	}
	return i;
}

char *ft_strnstr(const char	*big, const char *little, size_t len)
{
	int		i;
    size_t	lit_len;

    if (0 == (lit_len = ft_strnlen(little, len)))
            return ((char *)big);

    for (i=0; i<=(int)(len - lit_len); i++)
    {
        if ((big[0] == little[0]) && (0 == ft_strncmp(big, little, lit_len)))
            return ((char *)big);
		big++;
    }
    return NULL;
}

int main()
{
	const char *b = "123456789";
	const char *l = "345";
	char *res;

	res = ft_strnstr(b, l, 5);
	printf("%s", res);
}