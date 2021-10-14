#ifndef HEADER_H
#define HEADER_H

#include <stddef.h>

#include <stdio.h>//remove
#include <string.h>//remove
#include <stdlib.h>//remove

int ft_strlen(char *s);
int	ft_toupper(int character);
int	ft_tolower(int character);
char *ft_strrchr(const char *str, int ch);
int strncmp(const char *string1, const char *string2, size_t num);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat (char *dst, const char *src, size_t size);
char *ft_strchr(const char *str, int ch);
void *ft_memset(void *buf, int c, size_t count);
void *ft_memmove(void *destptr, const void *srcptr, size_t num);
void *ft_memcpy(void *destptr, const void *srcptr, size_t num);
int	ft_isprint(unsigned char c);
int	ft_isdigit(unsigned char c);
int	ft_isascii(unsigned char c);
int ft_isalpha(unsigned char с);
int	ft_isalnum(unsigned char c);
void ft_bzero(void *s, size_t n);

#endif