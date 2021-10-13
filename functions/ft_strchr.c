#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *str, int ch)
{
	int i;
	char *res;

	res = (char *)str;
	while (*res != ch)
	{
		if (*res == '\0')
			return NULL;
		res++;
	}
	return (res);
}

int main()
{
	char lotr[] = "_-=Властелин к0лец=-_";
	char *ring0 = ft_strchr(lotr, '0');
	char *ring1 = strchr(lotr, '0');                   

	printf("%lu ", ring0 - lotr + 1);
	printf("%lu ", ring1 - lotr + 1);
	return 0;
}