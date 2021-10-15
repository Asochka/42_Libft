#include "header.h"

size_t	ft_strlen0(const char *s)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (*dst != '\0')
		dst++;
	while ((i < size - 1) && (*src))
	{
		*(dst++) = *(src++);
		i++;
	}
	if (*dst != '\0')
		*dst = '\0';
	return (ft_strlen0(src) + ft_strlen0(dst));
}

int main()
{
	const char *str = "1234567890";
	//size_t sz;
	size_t sz1;
	//char  buf[10];
	char  buf1[10] = "123"; 

	//buf[9] = '\0';
	buf1[9] = '\0';

 	printf("%s\n", str);
	//printf("буфер0 перед копированием: \"%s\"\n", buf);
	printf("%s\n", buf1);

	//sz = strlcpy(buf, str, sizeof(buf));   
	sz1 = ft_strlcat(buf1, str, 5);
	//if (sz >= sizeof(buf))      
    //  printf("обнаружено усечение строки0 с %zu до %lu символов !\n", sz, sizeof(buf)-1);
	//if (sz1 >= sizeof(buf1))      
      //printf("обнаружено усечение строки1 с %zu до %lu символов !\n", sz1, sizeof(buf1)-1);

	//printf("буфер0 после копирования:  \"%s\"\n", buf);
	printf("%s\n", buf1);

	return 0;
}