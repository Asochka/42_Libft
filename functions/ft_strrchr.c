#include "header.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*res;

	res = (char *)str;
	while (*res)
		res++;
	while (*res != ch)
	{
		if (res < (char *)str)
			return NULL;
		res--;
	}
	return (res);
}

int main()
{
	char lotr[] = "_-=Властлин клец=-_";
	char *ring0 = ft_strrchr(lotr, '0');
	char *ring1 = strrchr(lotr, '0');                   

	printf("%lu ", ring0 - lotr + 1);
	printf("%lu ", ring1 - lotr + 1);
	return 0;
}