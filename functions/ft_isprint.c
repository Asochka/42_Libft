#include "header.h"

int	ft_isprint(unsigned char c)
{
	if (c>=32 && c<=126)
		return (1);
	else
		return (0);
}