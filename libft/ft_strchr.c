#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *str, int ch)
{
	int i;
	char *res;

	while (str[i])
	{
		if (str[i] == ch)
			res = str + i;
		i++;
	}
	if (ch == 0)
		return (str + i);
	else if (res < str)
		return (res);
	else
		return NULL;
}

int main()
{
	char lotr[] = "_-=Властелин к0лец=-_";
	char *ring0 = ft_strchr(lotr, '0');
	char *ring1 = strchr(lotr, '0');                   

	printf("%d ", ring0 - lotr + 1);
	printf("%d ", ring1 - lotr + 1);
	return 0;
}