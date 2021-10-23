/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smana <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:48:27 by smana             #+#    #+#             */
/*   Updated: 2021/10/22 16:48:29 by smana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	if (size == 0)
		return (count);
	while ((i < (size - 1)) && (*src))
	{
		*(dst++) = *(src++);
		i++;
	}
	*dst = '\0';
	return (count);
}

// int main()
// {
// 	const char *str = "1234567890";
// 	//size_t sz;
// 	size_t sz1;
// 	//char  buf[10];
// 	char  buf1[10]; 

// 	//buf[9] = '\0';
// 	buf1[9] = '\0';
//  	printf("%s\n", str);
// 	//printf("буфер0 перед копированием: \"%s\"\n", buf);
// 	printf("%s\n", buf1);
// 	//sz = strlcpy(buf, str, sizeof(buf));   
// 	sz1 = ft_strlcpy(buf1, str, sizeof(buf1));
// 	//if (sz >= sizeof(buf))      
// 	if (sz1 >= sizeof(buf1))      
//       printf("crop from %zu to %lu !\n", sz1, sizeof(buf1)-1);
// 	//printf("буфер0 после копирования:  \"%s\"\n", buf);
// 	printf("%s\n", buf1);
// 	return 0;
// }

// size_t
// strlcpy(char *dst, const char *src, size_t siz)
// {
// 	char *d = dst;
// 	const char *s = src;
// 	size_t n = siz;

// 	/* Copy as many bytes as will fit */
// 	if (n != 0) {
// 		while (--n != 0) {
// 			if ((*d++ = *s++) == '\0')
// 				break;
// 		}
// 	}

// 	/* Not enough room in dst, add NUL and traverse rest of src */
// 	if (n == 0) {
// 		if (siz != 0)
// 			*d = '\0';		/* NUL-terminate dst */
// 		while (*s++)
// 			;
// 	}

// 	return(s - src - 1);	/* count does not include NUL */
// }
