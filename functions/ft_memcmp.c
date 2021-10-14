#include "header.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	size_t			i;
	unsigned char	*arrcpy1;
	unsigned char	*arrcpy2;

	i = 0;
	arrcpy1 = (unsigned char *)arr1;
	arrcpy2 = (unsigned char *)arr2;
	while (i < n)
	{
		if ((arrcpy1[i]) == (arrcpy2[i]))
			return (0);
		else if ((arrcpy1[i]) > (arrcpy2[i]))
			return (1);
		else 
			return (-1);
		i++;
	}
}

int main()
{
	unsigned char src1[15]="aas4567890";
	unsigned char src2[15]="bbs2347890";

	printf ("%d\n", (ft_memcmp(src1, src2, 7)));
}