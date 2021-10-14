#include "header.h"

void *ft_memchr(const void *arr, int c, size_t n)
{
	size_t i;
	unsigned char k;
	unsigned char *arrcpy;

	i = 0;
	k = (unsigned char)c;
	arrcpy = (unsigned char *)arr;
	while (i < n && (*(arrcpy + i) == (unsigned char)c))
	{
		if (*(arrcpy + i) == (unsigned char)c)
			return ((void *)(arr + i));
		i++;
	}
	return NULL;
}

int main()
{
	unsigned char src[15]="1234567890";
   char *sym;

   printf ("src old: %s\n",src);
   sym = ft_memchr(src, '4', 9);

   if (sym != NULL)
  	 printf ("src new: %s\n",src);
	else 
		printf("no such sym");
}