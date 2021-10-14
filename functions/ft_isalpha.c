#include "header.h"

int	ft_isalpha(unsigned char с)
{
	if ((с >=65 && с <=90) || (с >= 97 && с <=122))
		return (1);
	else
		return (0);
}