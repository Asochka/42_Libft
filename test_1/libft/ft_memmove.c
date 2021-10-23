/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:45:15 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:45:17 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destptr, const void *srcptr, size_t num)
{
	size_t			i;
	unsigned char	mass[0xF00];

	i = 0;
	if (destptr == NULL)
		return ((void *)0);
	while (i < num)
	{
		(mass[i]) = *(unsigned char *)(srcptr + i);
		i++;
	}
	i = 0;
	while (i < num)
	{
		*(unsigned char *)(destptr + i) = mass[i];
		i++;
	}
	return (destptr);
}

// int main()
// {
// 	unsigned char src[10]= "123456789";
// 	unsigned char src1[10]= "123456789";

// 	memmove(&src1[4], &src1[3], 16);
// 	ft_memmove(&src[4], &src[3], 16);

// 	printf("%s\n", src1);
// 	printf("%s", src);
// }
