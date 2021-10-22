/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:49:12 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:49:14 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*res;

	res = (char *)str;
	while (*res)
		res++;
	while (*res != ch)
	{
		if (res < (char *)str)
			return (NULL);
		res--;
	}
	return (res);
}

// int main()
// {
// 	char lotr[] = "_-=Властлин клец=-_";
// 	char *ring0 = ft_strrchr(lotr, '0');
// 	char *ring1 = strrchr(lotr, '0');                   

// 	printf("%lu ", ring0 - lotr + 1);
// 	printf("%lu ", ring1 - lotr + 1);
// 	return 0;
// }
