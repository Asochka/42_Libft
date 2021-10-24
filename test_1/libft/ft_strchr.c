/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:45:57 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:45:59 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	unsigned char	*res;

	res = (unsigned char *)str;
	while (*res != (unsigned char)ch)
	{
		if (*res == '\0')
			return (NULL);
		res++;
	}
	return ((char *)res);
}

// int main()
// {
// 	char lotr[] = "_-=Властелин к0лец=-_";
// 	char *ring0 = ft_strchr(lotr, '0');
// 	char *ring1 = strchr(lotr, '0');                   

// 	printf("%lu ", ring0 - lotr + 1);
// 	printf("%lu ", ring1 - lotr + 1);
// 	return 0;
// }
