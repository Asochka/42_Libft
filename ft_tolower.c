#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int character)
{
	if (character >= 65 && character <= 90)
		return (character + 32);
	else
		return character;
}	
