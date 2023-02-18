/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:50:22 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/18 14:26:26 by motoko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
       	The strchr() function returns a pointer to the first occurrence of 
	the character c in the string s.

	RETURN VALUE
       	The strchr() function return a pointer to the matched character or NULL \
	if the  character  is  not found. The  terminating  null  byte  is considered 
	part of the string, so that if c is specified as '\0', these
       	functions return a pointer to the terminator.
*/

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	if (c == 0)
		return ((char *)s + ft_strlen(s));
	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	return (NULL);
}
