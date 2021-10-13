#include "header.h"

void *ft_memcpy(void *destptr, const void *srcptr, size_t num)
{
	size_t i;
	unsigned char *dest;
	unsigned char *src;
	unsigned char *res;

	i = 0;
	res = (unsigned char *)destptr;
	dest = (unsigned char *)destptr;
	src = (unsigned char *)srcptr;
	while (i < num)
	{
		*(dest++) = *(src++);
		i++;
	}
	return res;
}

int main()
{
	char str1[] = "123456789";
	char str2[] = "987654321";
	char str3[] = "123456789";
	char str4[] = "987654321";
	memcpy(str2, str1, 5);
	ft_memcpy(str4, str3, 5);
	printf("%s\n", str2);
	printf("%s", str4);
}