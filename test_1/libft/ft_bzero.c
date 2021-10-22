/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:42:43 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:42:46 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*res;

	i = 0;
	res = (unsigned char *)s;
	while (i < n)
	{
		*res = '\0';
		res++;
		i++;
	}
}

// int main()
// {
// 	char str1[] = "123456789";
// 	char str2[] = "123456789";
// 	//bzero(str1, 1);
// 	ft_bzero(str2, 1);
// 	//printf("%s\n", str1);
// 	printf("%s", str2);
// }
