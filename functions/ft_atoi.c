#include "header.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	min;

	i = 0;
	res = 0;
	min = -1;
	while ((str[i] > 8 && str[i] < 14) || (str[i] == 32))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			min = -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		res = 10*res + (int)(str[i] - 48);
		i++;
	}
	return (res * min);
}

int main()
{
	const char *str = "  ++-----0.23232dksk929w";
	printf("%d", ft_atoi(str));
}