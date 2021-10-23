/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:42:53 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:42:57 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*res;

	res = (void *)malloc(num * size);
	if (!res)
		return (NULL);
	else
		ft_bzero(res, num * size);
	return (res);
}

// int	main()
// {
//  float *p;
// 	p = (float *) ft_calloc(100, sizeof(float));
//  if(!p)
//  	printf ("Allocation failure.");
//  else
//  	printf("good");
// 	void	*str = ft_calloc(0, 0);

// 	if (str == ((void *)0))
// 		printf("TEST_FAILED");
// 	else
// 		printf("TEST_SUCCESS");
// 	free(str);
// }
