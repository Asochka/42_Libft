#include "header.h"

int	ft_isdigit(unsigned char c)
{
	if (c>=48 && c <= 57)
		return 1;
	else
		return 0;
}