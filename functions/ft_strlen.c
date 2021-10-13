#include "header.h"

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return i;
}

int main()
{
	char *s;
	s = "asdf";
	int a = ft_strlen(s);
	unsigned long b = strlen(s);
	printf("%d %lu", a, b);
}