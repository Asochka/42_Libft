/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:48:15 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:48:18 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dst) + ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (*dst != '\0')
		dst++;
	while ((i < (size - (len - ft_strlen(src)) - 1)) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

// int main()
// {
// 	const char *str = "1234567890";
// 	size_t sz;
// 	size_t sz1;
// 	char  buf[10] = "123";
// 	char  buf1[10] = "123"; 

// 	buf[9] = '\0';
// 	buf1[9] = '\0';

// 	sz = strlcat(buf, str, 2);   
// 	sz1 = ft_strlcat(buf1, str, 2);
// 	printf("%zu\n", sz);
// 	printf("%zu\n", sz1);
// 	printf("%s\n", buf);
// 	printf("%s\n", buf1);

// 	return 0;
// }
