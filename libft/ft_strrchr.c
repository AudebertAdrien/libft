/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:50:22 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/19 10:02:17 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
       	The strrchr() function returns a pointer to the last occurrence of 
	the character c in the string s.

	RETURN VALUE
       	The strrchr() function return a pointer to the matched character 
	or NULL if the  character  is  not found. The  terminating 
	null  byte  is considered part of the string, 
	so that if c is specified as '\0', these
       	functions return a pointer to the terminator.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*res;

	str = (char *)s;
	res = NULL;
	while (*str)
	{
		if (*str == (char)c)
			res = str;
		str++;
	}
	if (!res && *str == (char)c)
		res = str;
	return (res);
}
