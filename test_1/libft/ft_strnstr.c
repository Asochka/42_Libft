/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:49:00 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:49:02 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (i == maxlen - 1)
			return (maxlen);
		i++;
		s++;
	}
	return (i);
}

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	int		i;
	size_t	lit_len;

	i = 0;
	lit_len = ft_strnlen(little, len);
	if (0 == lit_len)
		return ((char *)big);
	while (i <= (int)(len - lit_len))
	{
		if ((big[0] == little[0]) && (0 == ft_strncmp(big, little, lit_len)))
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	const char *b = "123456789";
// 	const char *l = "345";
// 	char *res;

// 	res = ft_strnstr(b, l, 5);
// 	printf("%s", res);
// }
