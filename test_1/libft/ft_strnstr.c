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

// static size_t	ft_strnlen(const char *s, size_t maxlen)
// {
// 	size_t	i;

// 	i = 0;
// 	while (*s)
// 	{
// 		if (i == maxlen - 1)
// 			return (maxlen);
// 		i++;
// 		s++;
// 	}
// 	return (i);
// }

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	char	*str1;
	size_t	c;
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(little);
	str1 = (char *)big;
	if (s_len == 0 || big == little)
		return (str1);
	if (ft_strlen(str1) == 0)
		return (NULL);
	while (str1[i] != '\0' && i < ft_strlen(str1))
	{
		c = 0;
		while (str1[i + c] != '\0' && little[c] == str1[i + c] \
			&& little[c] != '\0' && i + c < len)
			c++;
		if (c == s_len)
			return (str1 + i);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char *s1 = "see FF your FF return FF now FF";
// 	char *s2 = "FF";
// 	size_t max = strlen(s1);
// 	char *i1 = strnstr(s1, s2, max);
// 	char *i2 = ft_strnstr(s1, s2, max);

// 	if (i1 == i2)
// 		printf("TEST_SUCCESS %s", i1);
// 	else
// 		printf("TEST_FAILED %s\n %s", i1, i2);
// }
// int main()
// {
// 	const char *b = "123456789";
// 	const char *l = "345";
// 	char *res;

// 	res = ft_strnstr(b, l, 5);
// 	printf("%s", res);
// }
