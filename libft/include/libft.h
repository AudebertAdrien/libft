#ifndef STDLIB_H
# define STDLIB_H

	#include <stddef.h>
	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>

	int	ft_isalpha(int c);
	int	ft_isdigit(int c);
	int	ft_isalnum(int c);
	int	ft_isascii(int c);
	int	ft_isprint(int c);
	int	ft_strlen(const char *str);
	void	*ft_memset(void *s, int c , size_t n);
	void	ft_bzero(void *s, size_t n);
	void 	*ft_memcpy(void *destination, const void *source, size_t size);
	void 	*ft_memmove(void *destination, const void *source, size_t size);
	int	ft_strlcpy(char *dst, char *src, size_t size);
	size_t	ft_strlcat(char *dst, char *src, size_t size);
	int	ft_toupper(int c);
	int	ft_tolower(int c);

#endif
