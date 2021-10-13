#include "header.h"

int ft_strncmp(const char *string1, const char *string2, size_t num)
{
	size_t i;

	i = 0;
	while ((i < num) && (string1[i] == string2[i]))
		i++;
	if (i == (num - 1))
		return (0);
	else if (string1[i] > string2[i])
		return (1);
	else
		return (-1);
}

int main()
{
	char str1[16]="1234567890";
	char str2[16]="1234507890";
  
	if (strncmp (str1, str2,4)==0)
		printf("strings are equal\n");
	else
		printf("strings aren't equal\n");

	if (ft_strncmp (str1, str2,4)==0)
		printf("strings are equal\n");
	else
		printf("strings aren't equal\n");
	return 0;
}