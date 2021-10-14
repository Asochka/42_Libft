#include "header.h"

void	*ft_memset(void *buf, int c, size_t count)
{
	size_t			i;
	unsigned char	*res;

	res = (unsigned char *)buf;
	i = 0;
	while (i < count)
	{
		*res = (unsigned char)c;
		res++;
		i++;
	}
	return (buf);
}

int main()
{
	char str1[] = "123456789";
	char str2[] = "123456789";
	memset(str1, 48, 5);
	ft_memset(str2, 48, 5);
	printf("%s\n", str1);
	printf("%s", str2);
}
