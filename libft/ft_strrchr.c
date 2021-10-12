#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *str, int ch)
{
	int i;
	char *res;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		if (str[i] == ch)
			return (str + i)
		i--;
	}
	if (ch == 0)
		return (str + ft_strlen(str));
	else
		return NULL;
}