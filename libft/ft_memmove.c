#include <stdio.h>
#include <string.h>
#include <stddef.h>

void *ft_memmove(void *destptr, const void *srcptr, size_t num)
{
	size_t i;
	unsigned char *dest;
	unsigned char *src;
	unsigned char *res;
	unsigned char *buf;
	unsigned char *cpybuf;

	i = 0;
	res = (unsigned char *)destptr;
	dest = (unsigned char *)destptr;
	src = (unsigned char *)srcptr;
	cpybuf = buf;
	while (i < num)
	{
		*(buf++) = *(src++);
		i++;
	}
	i = 0;
	while (i < num)
	{
		*(dest++) = *(buf++);
		i++;
	}
	return res;
}

int main()
{
	unsigned char src[10]= "1234567890";
	unsigned char src1[10]= "1234567890";
	char str1[] = "123456789";
	char str2[] = "987654321";
	char str3[] = "123456789";
	char str4[] = "987654321";
	memmove(&src[4], &src[3], 3);
	ft_memmove(&src1[4], &src1[3], 3);
	//ft_memcpy(str4, str3, 5);
	//printf("%s\n", str2);
	//printf("%s", str4);
	printf("%s\n", src);
	printf("%s", src1);
}