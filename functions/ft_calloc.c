#include "header.h"

void	*ft_calloc(size_t num, size_t size)
{
	void *res;

	res = (void *)malloc(num * size);
	if (!res)
		return NULL;
	return (res);
}

int main()
{
	float *p;
	p = (float *) ft_calloc(100, sizeof(float));
	if(!p)
		printf ("Allocation failure.");
	else
		printf("good");
}