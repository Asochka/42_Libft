#include "header.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	size_t	i;

	i = 0;
	res = (char *)malloc(ft_strlen(s) + 1);
	if (!res)
		return NULL;
	while (i < (ft_strlen(s) + 1))
	{
		res[i] = (char)(s[i]);
		i++;
	}
	return (res);
}

int main (void)
{    
	char str [11]="0123456789";
	char *istr;

	istr = ft_strdup(str);
	printf ("%s\n", istr);
	free (istr);

	return 0;
}