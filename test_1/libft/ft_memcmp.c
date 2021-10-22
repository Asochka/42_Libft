/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:44:39 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:44:40 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
			i++;
		else
			break ;
	}
	return ((arrcpy1[i]) - (arrcpy2[i]));
}

// int main()
// {
// 	unsigned char src1[15]="aas4567890";
// 	unsigned char src2[15]="bbs2347890";

// 	printf ("%d\n", (ft_memcmp(src1, src2, 7)));
// }

int main()
{
	char *s1 = "\xff\xaa\xde\x12";
	char *s2 = "\xff\xaa\xde\x12MACOSAAAAA";
	size_t size = 5;
	int i1 = memcmp(s1, s2, size);
	int i2 = ft_memcmp(s1, s2, size);

	if (i1 == i2)
		printf("TEST_SUCCESS");
	else
		printf("%d TEST_FAILED", i2);
}
