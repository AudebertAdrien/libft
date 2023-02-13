/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:38:29 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/13 11:30:00 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
	ft_substr get a part of the string s, that begin with 'start' 
	and ends with size 'len'
	if the length is greater than the difference in the rest of 
	the string, it means that the length exceeds and must be reduced	

	RETURN VALUE
	if the lenght is greater than the length of the string,
	return a pointer to null else return a pointer
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	src_size;
	size_t	i;

	i = 0;
	src_size = ft_strlen(s);
	if (start >= src_size)
	{
		ptr = (malloc(1));
		*ptr = '\0';
		return (ptr);
	}
	if (len > src_size - start)
		len = src_size - start;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
