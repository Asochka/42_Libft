#include "header.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t res;

	while ((i < size - 1) && (*dst) && (*src))
	{
		*(dst++) = *(src++);
		i++;
	}
	if (*dst != '\0')
		*dst = '\0';
	return ((size_t)(ft_strlen((char *)src)));
}

int main()
{
	const char *str = "образец строки";
	//size_t sz;
	size_t sz1;
	//char  buf[10];
	char  buf1[10]; 

	//buf[9] = '\0';
	buf1[9] = '\0';

 	printf("строка: \"%s\"\n\n", str);
	//printf("буфер0 перед копированием: \"%s\"\n", buf);
	printf("буфер1 перед копированием: \"%s\"\n", buf1);

	//sz = strlcpy(buf, str, sizeof(buf));   
	sz1 = ft_strlcpy(buf1, str, sizeof(buf1));
	//if (sz >= sizeof(buf))      
    //  printf("обнаружено усечение строки0 с %zu до %lu символов !\n", sz, sizeof(buf)-1);
	if (sz1 >= sizeof(buf1))      
      printf("обнаружено усечение строки1 с %zu до %lu символов !\n", sz1, sizeof(buf1)-1);

	//printf("буфер0 после копирования:  \"%s\"\n", buf);
	printf("буфер1 после копирования:  \"%s\"\n", buf1);

	return 0;
}
